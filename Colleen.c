#include<stdio.h>
/*
	le commentaire
*/
static void print(char*s){printf(s,10,10,10,10,10,10,10,10,10,34,s,34,10);}
int main(){
/*
	le commentaire
*/
char*s="#include<stdio.h>%c/*%c	le commentaire%c*/%cstatic void print(char*s){printf(s,10,10,10,10,10,10,10,10,10,34,s,34,10);}%cint main(){%c/*%c	le commentaire%c*/%cchar*s=%c%s%c;print(s);}%c";print(s);}
