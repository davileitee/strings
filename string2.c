#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char s1[]="teste";
	char s2[]="teste";
	
	if(s1==s2){
		printf("teste");
	}
	
	if (strcmp(s1,s2)==0){
		printf("sao iguais");
	}
	
	
	
	return 0;
}
