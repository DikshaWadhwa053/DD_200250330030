cmd_/home/diksha/Device_Drivers/Programs/03-Export_Symbol/add.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o /home/diksha/Device_Drivers/Programs/03-Export_Symbol/add.ko /home/diksha/Device_Drivers/Programs/03-Export_Symbol/add.o /home/diksha/Device_Drivers/Programs/03-Export_Symbol/add.mod.o;  true
