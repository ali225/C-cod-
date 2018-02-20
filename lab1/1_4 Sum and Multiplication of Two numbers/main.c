/*
 ============================================================================
 Name        : 04.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description :print and scanf in  C, Eng Ali Gamal
 ============================================================================
 */
#include<stdio.h>
 
 void main(void)
 {
	 /* Define two integers */
	int a , b;
	
	/* Ask the user to enter value 1 */
	printf("Please Enter number 1 : ");
	
	/* Scan the value and save it in a */
	scanf("%d",&a);
	
	/*Ask the user to enter value 2 */ 
	printf("\nplease Enter Number 2 : ");
	
	/*Scan the value and save it in b */ 
	scanf("%d",&b);
	
	/* Print the summation */
	printf("\na + b = %d\n", a+b);
	
	/* Print the summation */
	printf("\na x b = %d\n", a*b);
 }