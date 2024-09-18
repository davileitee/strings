#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char s1[]="teste";
	char s2[100];
	int i;
	
	
	strcpy(s2,s1); //s1=s1
	
	printf("s1: %s\ns2 = %s\n",s1,s2);
	
	s2[4]='s';
	
	printf("s1: %s\ns2 = %s\n",s1,s2);
	
	
	
	

	return 0;
}
