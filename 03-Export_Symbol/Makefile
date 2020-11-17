obj-m :=average.o add.o

#KERNELDIR = /usr/src/linux-header-5.4.0-52-generic/

KERNELDIR = /lib/modules/$(shell uname -r)/build

PWD :=$(shell pwd)


default:
		$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

install:
		$(MAKE) -C $(KERNELDIR) M=$(PWD) modules_install
		depmod -a
clean:
		$(MAKE) -C $(KERNELDIR) M=$(PWD) clean