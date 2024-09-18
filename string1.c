#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char s1[]="teste";
	char s2[100];
	int i;
	
	
	printf("digite seu nome:");
	fgets(s2, 100,stdin);
	
	printf("tamanho do texto (%s):%d\n",s1,strlen(s1));
	printf("tamanho do texto (%s):%d\n",s2,strlen(s2)-1);
	

	return 0;
}
	
