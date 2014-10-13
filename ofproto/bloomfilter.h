/*-qian
  define the struct of bloomfilter
  and the prototype functions of bloomfilter
*/
#ifndef _BLOOMFILTER_H
#define _BLOOMFILTER_H

#include <stdlib.h>
#include "b_hash.h"
#include <stdarg.h>

typedef unsigned char uint8;
typedef unsigned short int uint16;
typedef struct bloom{
    uint16  asize;   //bloomfilter的规模，位数
    unsigned char *a;
    uint8   nfuncs;       //哈希函数的个数
    hash_function  *funcs;    //哈希函数指针
}BLOOM;
BLOOM *bloom_create(uint16 asize,uint8 nfuncs,...);     //初始化bloomfliter
int bloom_destroy(BLOOM *bloom);                        //销毁bloomfilter
int bloom_add(BLOOM *bloom,const char *s,unsigned int len);              //在bloomfilter中添加元素
int bloom_update(BLOOM *bloom,const unsigned char *s);           //更新bloomfilter  
int bloom_check(BLOOM *bloom,const char *s,unsigned int len);            //在bloomfilter中查找元素

#endif

