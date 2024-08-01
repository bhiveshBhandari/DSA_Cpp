#include<stdio.h>
int main()
{
	int i,choice,a[100],n,item,pos;
	printf("Bhivesh Bhandari \n1910992550 \n");
	printf("Enter the no. of digits in array \n");
	scanf("%d", &n);
	printf("Enter the numbers in array \n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("1. Delete the no. at the end \n2. Delete the no. at first \n3. Delete the no. anywhere \n");
	printf("Enter your choice \n");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1: printf("The new array is:\n");
				for(i=0;i<n-1;i++)
				{
					printf("%d \n",a[i]);
				}
				break;
		case 2: printf("The new array is:\n");
				for(i=1;i<n;i++)
				{
					printf("%d \n", a[i]);
				}
				break;
		case 3: printf("Enter the position of number you want to delete \n");
				scanf("%d",&pos);
				if(pos<0||pos>n+1)
				{
					printf("You have entered a wrong position \n");
				}
				else
					for(i=pos;i<n;i++)
					{
						a[i]=a[i+1];
					}
					n=n-1;
					printf("The new array is:\n");
					for(i=0;i<n;i++)
					{
						printf("%d \n",a[i]);
					}
					break;
		default: printf("You have enterd a wrong choice \n");
	}
	
}
