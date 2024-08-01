#include<stdio.h>
int main()
{
	int item,loc = 0;
	int a[10],n,i;
	printf("Enter the no. of digits in array \n");
	scanf("%d", &n);
	printf("Enter the numbers in array \n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the new item \n");
	scanf("%d", &item);
	for(i=n-1;i>=loc;i--)
	{
		a[i+1]=a[i];
	}
	a[loc]=item;
	n=n+1;
	for(i=0;i<n;i++)
	{
		printf("%d", a[i]);
	}
}
