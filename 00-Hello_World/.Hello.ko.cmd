cmd_/home/diksha/Device_Drivers/Programs/00-Hello_World/Hello.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o /home/diksha/Device_Drivers/Programs/00-Hello_World/Hello.ko /home/diksha/Device_Drivers/Programs/00-Hello_World/Hello.o /home/diksha/Device_Drivers/Programs/00-Hello_World/Hello.mod.o;  true
