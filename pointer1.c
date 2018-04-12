#include<stdio.h>

int main()
{
	int a =1025;
	int *p;
	p = &a;
	// pointer arithmetic 
	//printf("address p is %d \n",p);// p is address
	//printf("value at address p is %d \n ",*p);
	printf("size of integer is %d bytes \n",sizeof(int));
	//printf("%d\n",p+1); // p+1 is 4bytes  
	printf("address = %d, value = %d \n ",p,*p);
	printf("value at address p is %d \n ",p+1,*(p+1));
	
	char *p0;
	p0 = (char*)p;//typecasting
	printf("size of char is %d bytes \n",sizeof(char));
	printf("address = %d, value = %d \n ",p0,*p0);
	printf("address = %d, value = %d \n ",p0+1,*(p0+1));

}