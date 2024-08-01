#include<stdio.h>
int main()
{
	int i,n,arr[10],naya,loc;
	printf("Enter the size of array: ");
	scanf("%d" ,&n);
	printf("Enter the array elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[n]);
	}
	{
	printf("Enter the element to be inserted:\n");
	scanf("%d",&naya);
	printf("Enter the index position of element to be inserted:\n");
	scanf("%d",&loc);
	for(i=n-1;i>=loc;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[loc]=naya;
	n=n+1;
	}
	printf("The new array is:\n");
		for(i=0;i<=n;i++)
		{
		printf("%d\n",arr[i]);
		}
}
