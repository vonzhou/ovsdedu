cmd_/home/vonzhou/WorkSpace/ovs/ovs-x0.1/datapath/linux/reciprocal_div.o := gcc -Wp,-MD,/home/vonzhou/WorkSpace/ovs/ovs-x0.1/datapath/linux/.reciprocal_div.o.d  -nostdinc -isystem /usr/lib/gcc/x86_64-linux-gnu/4.6/include -I/home/vonzhou/WorkSpace/ovs/ovs-x0.1/include -I/home/vonzhou/WorkSpace/ovs/ovs-x0.1/datapath/linux/compat -I/home/vonzhou/WorkSpace/ovs/ovs-x0.1/datapath/linux/compat/include  -I/usr/src/linux-headers-3.2.0-23-generic/arch/x86/include -Iarch/x86/include/generated -Iinclude  -include /usr/src/linux-headers-3.2.0-23-generic/include/linux/kconfig.h -Iubuntu/include  -D__KERNEL__ -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -O2 -m64 -mtune=generic -mno-red-zone -mcmodel=kernel -funit-at-a-time -maccumulate-outgoing-args -fstack-protector -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -DCONFIG_AS_CFI_SECTIONS=1 -DCONFIG_AS_FXSAVEQ=1 -pipe -Wno-sign-compare -fno-asynchronous-unwind-tables -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -Wframe-larger-than=1024 -Wno-unused-but-set-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -pg -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO -DVERSION=\"1.9.0\" -I/home/vonzhou/WorkSpace/ovs/ovs-x0.1/datapath/linux/.. -I/home/vonzhou/WorkSpace/ovs/ovs-x0.1/datapath/linux/.. -g -include /home/vonzhou/WorkSpace/ovs/ovs-x0.1/datapath/linux/kcompat.h  -DMODULE  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(reciprocal_div)"  -D"KBUILD_MODNAME=KBUILD_STR(openvswitch)" -c -o /home/vonzhou/WorkSpace/ovs/ovs-x0.1/datapath/linux/.tmp_reciprocal_div.o /home/vonzhou/WorkSpace/ovs/ovs-x0.1/datapath/linux/reciprocal_div.c

source_/home/vonzhou/WorkSpace/ovs/ovs-x0.1/datapath/linux/reciprocal_div.o := /home/vonzhou/WorkSpace/ovs/ovs-x0.1/datapath/linux/reciprocal_div.c

deps_/home/vonzhou/WorkSpace/ovs/ovs-x0.1/datapath/linux/reciprocal_div.o := \
  /home/vonzhou/WorkSpace/ovs/ovs-x0.1/datapath/linux/kcompat.h \
  /usr/src/linux-headers-3.2.0-23-generic/arch/x86/include/asm/div64.h \
    $(wildcard include/config/x86/32.h) \
  include/asm-generic/div64.h \
  /home/vonzhou/WorkSpace/ovs/ovs-x0.1/include/linux/types.h \
  /home/vonzhou/WorkSpace/ovs/ovs-x0.1/datapath/linux/compat/include/linux/types.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  /usr/src/linux-headers-3.2.0-23-generic/arch/x86/include/asm/types.h \
  include/asm-generic/types.h \
  include/asm-generic/int-ll64.h \
  /usr/src/linux-headers-3.2.0-23-generic/arch/x86/include/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/linux/posix_types.h \
  /home/vonzhou/WorkSpace/ovs/ovs-x0.1/datapath/linux/compat/include/linux/stddef.h \
  include/linux/stddef.h \
  /home/vonzhou/WorkSpace/ovs/ovs-x0.1/datapath/linux/compat/include/linux/compiler.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  /home/vonzhou/WorkSpace/ovs/ovs-x0.1/datapath/linux/compat/include/linux/compiler-gcc.h \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc4.h \
  /usr/src/linux-headers-3.2.0-23-generic/arch/x86/include/asm/posix_types.h \
  /usr/src/linux-headers-3.2.0-23-generic/arch/x86/include/asm/posix_types_64.h \
  /home/vonzhou/WorkSpace/ovs/ovs-x0.1/datapath/linux/compat/include/linux/reciprocal_div.h \
  include/linux/version.h \
  include/linux/reciprocal_div.h \

/home/vonzhou/WorkSpace/ovs/ovs-x0.1/datapath/linux/reciprocal_div.o: $(deps_/home/vonzhou/WorkSpace/ovs/ovs-x0.1/datapath/linux/reciprocal_div.o)

$(deps_/home/vonzhou/WorkSpace/ovs/ovs-x0.1/datapath/linux/reciprocal_div.o):
