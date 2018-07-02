
/* sloution array and size of array as arguments*/
/*int Solution(int a[], int n)
{
	
	int i ,y = 1;
	int x = a[0];
	
	for (i = 1; i< n; i++){
		x = x^a[i];                       // uesd xor
		//printf("this x %d\n",x);
	}
	
	for ( i = 2; i <= n+1; i++){
		y = y^i;		 					//uesd xor 
		//printf("this y %d\n",y);
	}
	
	return (x^y);                      // uesd xor 
}
*/

int  Solution(int a[] , int n)
{
	
	int i, total;
	
	total = (n+1)*(n+2)/2;
	for(i = 0; i < n ; i++)
		total -= a[i];
	
	printf("the Total %d\n", total);
	
	return total;
	
	
}

