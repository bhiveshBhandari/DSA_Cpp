#include<stdio.h>
int main()
{
	int a[100];
	int avg,sum,i,f,j;
	printf("Enter 10 numbers \n");
	for(i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
	}
	for(j=0;j<10;j++)
	{
		sum= sum + a[j];  
		avg= sum/10;
	}
	printf("The avg of the numbers are %d \n", avg);
}
