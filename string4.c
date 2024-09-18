#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char s1[]="Seu nome e ";
	char s2[100];
	int i;
	
    printf("digite seu nome:");
	fgets(s2, 100,stdin);
	
	strcat(s1,s2);
	
	printf("%s",s1);

	return 0;
}
