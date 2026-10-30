obj-m += Hello-1.o
obj-m += Hello-2.o
obj-m += Hello-3.o
obj-m += Hello-4.o
obj-m += Hello-5.o
obj-m += StartStop.o
StartStop-objs := Start.o Stop.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
