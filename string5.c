#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	
	char s1[100];
	char s2[100];
	char s3[100];
	
	printf("Digite a primeira String:");
	fgets(s1,100,stdin);
	s1[strlen(s1)-1]='\0';
	
	printf("Digite a segunda String:");
	fgets(s2,100,stdin);
	s2[strlen(s2)-1]='\0';
	
	printf("Digite a terceira String:");
	fgets(s3,100,stdin);
	s3[strlen(s3)-1]='\0';
	
	printf("Tamanho da Strng(%s1):%d\n",s1, strlen(s1));
	printf("Tamanho da Strng(%s2):%d\n",s2, strlen(s2));
	
	if(strcmp(s1,s2)==0){
		strcpy(s2,s3);
		printf("Valor copiado da terceira para a segunda \n%s",s2);
	}else {
		strcat(s3,s1);
		strcat(s3,s2);
		printf("%s",s3);
	}
	
	
	
	return 0;
}
