/*Write a code that takes 2 numbers and print their
summation, subtraction, anding, oring, and Xoring  */ 

#include<stdio.h>

void main(void)
{ 
    /*the number 3 Defein*/
	int a , b , c;
	
	/*Enter the number a: */
	printf("please enter number a:");
	
	/*Scan number 1 */
	scanf("%d",&a);
	
	/*Enter the number b : */
	printf("please enter number b :");
	
	/*Scan number 1 */
	scanf("%d",&b);
	
	/*print number a + b  */
	c = a + b ; 
	printf("a + b = %d\n",c);
	
	/*print number a - b  */
	c = a - b ; 
	printf("a - b = %d\n",c);
	
	/*print number a & b  */
	c = a & b ; 
	printf("a & b = %d\n",c);
	
	/*print number a | b  */
	c = a | b ; 
	printf("a | b = %d\n",c);
	
	/*print number a ^ b  */
	c = a ^ b ; 
	printf("a ^ b = %d\n",c);
	
}