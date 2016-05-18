#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
#define LI "#include<stdio.h>%c#include<fcntl.h>%c#include<string.h>%c#include<unistd.h>%c#include<stdlib.h>%c#define LI %c%s%c%cint main(){%cint i=%d;%cchar o[99];sprintf(o,%cSully_%%d.c%c,i);int f;if((f=open(o,O_WRONLY|O_CREAT|O_TRUNC,0644))==-1){return(0);}dprintf(f,LI,10,10,10,10,10,34,LI,34,10,10,i-1,10,34,34,34,34,34,34,10);close(f);bzero(o,99);sprintf(o,%cgcc Sully_%%d.c -o Sully_%%d%c,i,i);if(system(o)==-1){return(0);}if(i<=0){return(0);}bzero(o,99);sprintf(o,%c./Sully_%%d%c,i);system(o);}%c"
int main(){
int i=5;
char o[99];sprintf(o,"Sully_%d.c",i);int f;if((f=open(o,O_WRONLY|O_CREAT|O_TRUNC,0644))==-1){return(0);}dprintf(f,LI,10,10,10,10,10,34,LI,34,10,10,i-1,10,34,34,34,34,34,34,10);close(f);bzero(o,99);sprintf(o,"gcc Sully_%d.c -o Sully_%d",i,i);if(system(o)==-1){return(0);}if(i<=0){return(0);}bzero(o,99);sprintf(o,"./Sully_%d",i);system(o);}
