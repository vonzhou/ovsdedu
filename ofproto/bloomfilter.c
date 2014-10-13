/*-qian
  the implemention of bloomfilter's functions
 */
#include "bloomfilter.h"
#include <stdarg.h>
#include <stdio.h>
//置位
#define SETBIT(a,n) (a[n/8]|=(1<<(n%8)))
#define GETBIT(a,n) (a[n/8]&(1<<(n%8)))
//初始化bloomfliter
BLOOM *bloom_create(uint16 asize,uint8 nfuncs,...)
{
     BLOOM *bloom;
     int n;
     va_list l;
     //非配bloom内存
     if(!(bloom=(BLOOM *)malloc(sizeof(BLOOM))))
     return NULL;

     //初始化分配bloom存储单元
     if(!(bloom->a=(unsigned char *)calloc((asize+7)/8,sizeof(char))))
     {
         free(bloom);
         return NULL;
     }

     //初始化bloom的hash函数的存储单元
     if(!(bloom->funcs=(hash_function *)malloc(nfuncs*sizeof(hash_function))))
     {
        free(bloom->a);
        free(bloom);
        return NULL;
     }

    //初始化有哪些hash函数
     va_start(l,nfuncs);
     for(n=0;n<nfuncs;n++)
     {
        bloom->funcs[n]=va_arg(l,hash_function);
     }
     va_end(l);

     bloom->nfuncs=nfuncs;
     bloom->asize=asize;
     return bloom;
}

//销毁bloomfilter
int bloom_destroy(BLOOM *bloom)
{
    free(bloom->a);
    free(bloom->funcs);
    free(bloom);
    return 0;
}

//在bloomfilter中添加元素
int bloom_add(BLOOM *bloom,const char *s,unsigned int len)
{
      uint8 n;

      //置相应的bloomfilter位
      for(n=0;n<bloom->nfuncs;n++)
      {
          SETBIT(bloom->a,bloom->funcs[n](s,len)%bloom->asize);
          printf("b:%u\n",bloom->funcs[n](s,len));
      }
      return 0;
}

//更新bloomfilter  
int bloom_update(BLOOM *bloom,const unsigned char *s)
{
      memcpy(bloom->a,s,(bloom->asize+7)/8);
      return 0;
}

//在bloomfilter中查找元素
int bloom_check(BLOOM *bloom,const char *s,unsigned int len)
{
     uint8 n;
     for(n=0;n<bloom->nfuncs;n++)
     {
        //只有在所有的相应为都为 1
        if(!(GETBIT(bloom->a,bloom->funcs[n](s,len) % bloom->asize)))
            return 0;
     }
     return 1;
}

