#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p, i, j;
    /* Add statement here */
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            p[i*4+j] = i;
            printf("%d", p[i*4+j]);
        }
    }
    return 0;
}