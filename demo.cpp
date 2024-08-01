#include<stdio.h>
int insertion_beg();
int insertion_end();
int insertion_anywhere();
int i,j,temp,loc,arr[10],n,choice,naya;
int main()
{
	int a;
printf("Enter the size of array: ");
scanf("%d" ,&n);
printf("Enter the array elements: \n");
for(i=0;i<n;i++)
{
	scanf("%d", &arr[n]);
}
printf("***Enter choice***\n");
printf("Press 1 for Insertion at beginning \n");
printf("Press 2 for Insertion at ending \n");
printf("Press 3 for Insertion at anywhere\n");
scanf("%d",&choice);
switch (choice)
{
	case 1:
		insertion_beg();
		printf("The new array is: \n");
		for(i=0;i<=n;i++)
		{
		printf("%d \n",arr[i]);
		}
		break;
	case 2:
		insertion_end();
		arr[n]=arr[naya];
		printf("The new array is:\n");
		for(a=0;a<=n;a++)
		{
		printf("%d",arr[a]);
		}
		break;
	case 3:
		insertion_anywhere();
		printf("The new array is:\n");
		for(i=0;i<n;i++)
		{
		printf("%d",arr[i]);
		}
		break;
	default:
		printf("***Enter the correct choice***");
}
}
int insertion_beg()
{
	printf("Enter the element to be inserted:\n");
	scanf("%d",&naya);
	for(i=n-1;i>=0;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[0]=naya;
}

int insertion_end()
{
	printf("Enter the element to be inserted:");
	scanf("%d",&naya);
}

int insertion_anywhere()
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
