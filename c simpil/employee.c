#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int n;
	
	typedef struct{
		int id;
		char name[20];
		int salary;
	}employee;
	
	employee *pemp;
	
	printf("Enter the number employee :");
	scanf("%d",&n);
	
	pemp = (employee *)calloc(n,sizeof(employee));
	
	for(int i=0 ; i < n; i++){
		printf("Enter employee No . %d data :",i);
		scanf("%d%s%d",&pemp[i].id,pemp[i].name,&pemp[i].salary);
		
	}
	
	printf("Retrieving All employee data\n");
	
	for(int i=0; i< n; i++){
		printf("\nEmployee No. %d data\n",i);
		printf("name : %s \n",pemp[i].name);
		printf("id : %d\n",pemp[i].id);
		printf("salary : %d\n",pemp[i].salary);
	}
	return 0;
}