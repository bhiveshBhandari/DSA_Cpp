#include<stdio.h>
int main()
{
	int choice,item,loc = 0,a[10],n,l,i,j,k;
	printf("Enter the no. of digits in array \n");
	scanf("%d", &n);
	printf("Enter the numbers in array \n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("1. Enter no. in the end \n2. Enter no. at first \n3. Enter no, anywhere \n");
	printf("Enter your choice \n");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1: printf("Enter the new item to be inserted at the end \n");
				scanf("%d", &item);
				a[n]= item;
				printf("The new array is \n");
				for(i=0;i<=n;i++)
				{
					printf("%d \n" ,a[i]);
				}
				break;
				
		case 2: printf("Enter the new item be inserted at first \n");
				scanf("%d", &item);
				for(i=n-1;i>=loc;i--)
				{
					a[i+1]=a[i];
				}
				a[loc]=item;
				n=n+1;
				printf("The new array is \n");
				for(i=0;i<n;i++)
				{
					printf("%d \n", a[i]);
				}	
				break;
				
		case 3:	printf("Enter the location you want to put the number \n");
				scanf("%d", &l);
				printf("Enter the new number \n");
				scanf("%d", &item);
				for(i=n-1;i>=loc;i--)
				{
					a[i+1]=a[i];
				}
				a[l-1]=item;
				printf("The new array is \n");
				for(k=0;k<=n;k++)
				{
					printf("%d \n", a[k]);
				}
				break;
				
		default: printf("You have entered the wrong choice \n");
	}
}
