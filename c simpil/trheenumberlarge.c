#include<stdio.h>

int main(void){
	
	int x , y , z;
	
	printf("enter the three number large :");
	scanf("%d%d%d",&x,&y,&z);
	
	if (x > y){
		if(x > z){
			printf("%d is the large number",x);
		}else{
			printf("%d is the large number",y);
		}
	}else{
		if(y > z){
			printf("%d is the large number",y);
		}else{
			printf("%d is the large number",z);

		}
	}
	return 0;
}