#include <stdio.h>
int selection_inc();
int selection_dec();
int a[15],n,temp,j,i,min,max;
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
		case 1:selection_inc();
	 printf("The sorted list is \n");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d \n" ,a[i]);
	 }
	break;
	 	case 2:selection_dec();
	 printf("The sorted list is \n");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d \n" ,a[i]);
	 }
	 break;
	 	default: printf("You have entered a wrong choice \n");
	}	
}
int selection_inc()
{
	for(i=0;i<n;i++)
	{
		min= i;
		for(j=i+1;j<n;j++)
		{
		if(a[min]>a[j])
		{	
			min=j;
		}
	}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
		
	}
}
int selection_dec()
{
	for(i=0;i<n;i++)
	{
		max= i;
		for(j=i+1;j<n;j++)
		if(a[max]<a[j])
		{
			max=j;
		}
		temp=a[i];
		a[i]=a[max];
		a[max]=temp;
	}
}
	



