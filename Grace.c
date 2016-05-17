#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
/*
	such comment
*/
#define LI "#include<stdio.h>%c#include<fcntl.h>%c#include<unistd.h>%c/*%c	such comment%c*/%c#define LI %c%s%c%c#define FD int fd;if((fd=open(%cGrace_kid.c%c,O_WRONLY|O_CREAT|O_TRUNC,0644))==-1){return(0);}%c#define FT int main(){FD print(fd);close(fd);}%cstatic void print(int fd){char*s=LI;dprintf(fd,s,10,10,10,10,10,10,34,s,34,10,34,34,10,10,10,10);}%cFT%c"
#define FD int fd;if((fd=open("Grace_kid.c",O_WRONLY|O_CREAT|O_TRUNC,0644))==-1){return(0);}
#define FT int main(){FD print(fd);close(fd);}
static void print(int fd){char*s=LI;dprintf(fd,s,10,10,10,10,10,10,34,s,34,10,34,34,10,10,10,10);}
FT
