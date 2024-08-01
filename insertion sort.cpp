#include<stdio.h>
int insertion_inc();
int insertion_dec();
int i,j,temp,n,a[15];
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
		case 1:insertion_inc();
	 printf("The sorted list is \n");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d \n" ,a[i]);
	 }
	break;
	 	case 2:insertion_dec();
	 printf("The sorted list is \n");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d \n" ,a[i]);
	 }
	 break;
	 	default: printf("You have entered a wrong choice \n");
	}	
}
int insertion_inc()
{
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
}
int insertion_dec()
{ 
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]<temp)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]= temp;
	}
}
