#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#define RUN() (main())
static void print(int fd){char*s="#include<stdio.h>%c#include<fcntl.h>%c#include<unistd.h>%c#define RUN() (main())%cstatic void print(int fd){char*s=%c%s%c;dprintf(fd,s,10,10,10,10,34,s,34,10,34,34,10);}%cint RUN(){int fd;if((fd=open(%cGrace_kid.c%c,O_WRONLY|O_CREAT|O_TRUNC,0644))==-1){return(0);}print(fd);close(fd);}%c";dprintf(fd,s,10,10,10,10,34,s,34,10,34,34,10);}
int RUN(){int fd;if((fd=open("Grace_kid.c",O_WRONLY|O_CREAT|O_TRUNC,0644))==-1){return(0);}print(fd);close(fd);}
