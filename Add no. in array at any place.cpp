#include<stdio.h>
int main()
{
	int loc,item,a[10],i,j,k;
	printf("Enter five numbers in the array \n");
	for(j=0;j<=4;j++)
	{
		scanf("%d", &a[j]);
	}
	printf("Enter thr location you want to put the number \n");
	scanf("%d", &loc);
	printf("Enter the new number \n");
	scanf("%d", &item);
	for(i=4;i>=loc;i--)
	{
		a[i+1]=a[i];
	}
	a[loc]=item;
	printf("The new array is \n");
	for(k=0;k<=5;k++)
	{
		printf("%d \n", a[k]);
	}
}
