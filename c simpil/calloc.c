#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	
	char *pstring;
	int n;
	
	printf(" Enter the length of the string :");
	scanf("%d",&n);
	
	pstring=(char *)calloc(n,sizeof(char));
	
	printf("Enter the string :");
	scanf("%s",pstring);
	
	for(int i=0;i<n;i++)
		printf("%c",pstring[i]);
	return 0;
}