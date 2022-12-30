#include <stdio.h>
#include <stdlib.h>
char* sifrele(char *x,int o){
	int i=0;
	for(i=0;x[i]!='\0';i++)
	{
	if(x[i]==' '){
	 printf("%c",*(x+i));
	 }
	 else{
	 x[i]+=o;
	 printf("%c",*(x+i));
	 }
	} 
	return x;
}

int main(int argc, char *argv[]) {
	char y[1000];
	printf("Sifrelenmesini istediginiz kelime ya da kelimeleri giriniz: ");
	gets(y);
	sifrele(y,2);
    //printf("%s",sifrele(y,2));
	return 0;
}
