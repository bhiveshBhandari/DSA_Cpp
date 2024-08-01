#include<stdio.h>
int main()
{
	int n,i,a[15],b=0,j,f,no, counter,prime[10],t=0,m=0,total;
	int s=0;
	printf("Enter the number of elements \n");
	scanf("%d",&n);
	printf("Enter %d elements present in the array \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Even no. in the array are: \n");
	for(i=0;i<n;i++)
	{
		if(a[i] %2==0)
		{
			printf("%d \n",a[i]);
			s=s+a[i];
		}	
	}
	printf("The sum of all even no. are %d \n",s);
	printf("Odd no. in the array are: \n");
	for(i=0;i<n;i++)
	{
		if(a[i] %2!=0)
		{
			printf("%d \n",a[i]);
			b=b+a[i];
		}	
	}
	printf("The sum of all odd no. are %d \n",b);
	printf("The prime numbers are \n");
	for(i=0;i<n;i++)
     {
     		counter=0;
          for(j=2;j<a[i];j++)
          {
               if(a[i]%j==0)
               {
                    counter=1;
               }
          }
          if(counter==0)
          {
               prime[t]=a[i];
			   t++;
          }
    }
    for(i=0;i<t;i++)
    	{
          printf("%d \n",prime[i]);
          m=m+prime[i];
      	}
      	printf("The sum of all prime no. are %d \n",m);
  }

	
