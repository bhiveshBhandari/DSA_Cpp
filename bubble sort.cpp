#include<stdio.h>
int Bubble_inc();
int Bubble_dec();
int a[15],n,temp,j,i;

int main()
{
	int choice;
	printf("Bhivesh Bhandari \n1910992550 \n");
	printf("Enter number of elements \n");
  	scanf("%d", &n);

  	printf("Enter %d numbers in array \n", n);

  	for (i=0;i<n;i++)
  	{
    	scanf("%d", &a[i]);
	}
	printf("1. Sort in inreasing order \n2. Sort in decreasing order \n");
	printf("Enter your choice \n");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1: Bubble_inc();
	 printf("The sorted list is \n");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d \n" ,a[i]);
	 }
	break;
	 	case 2:Bubble_dec();
	 printf("The sorted list is \n");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d \n" ,a[i]);
	 }
	 break;
	 	default: printf("You have entered a wrong choice \n");
	}
	
}

int Bubble_inc()
{
	
	 for(i=0;i<n-1;i++)
	 {
	 	for(j=0;j<n-1;j++)
	 	{
	 		if(a[j]>a[j+1])
	 		{
	 		temp = a[j];
	 		a[j]=a[j+1];
	 		a[j+1]=temp;
	 		}
		 }
	 }
}
int Bubble_dec()
{
	
	 for(i=0;i<n-1;i++)
	 {
	 	for(j=0;j<n-1;j++)
	 	{
	 		if(a[j]<a[j+1])
	 		{
	 		temp = a[j];
	 		a[j]=a[j+1];
	 		a[j+1]=temp;
	 		}
		 }
	 }
}
	
	
