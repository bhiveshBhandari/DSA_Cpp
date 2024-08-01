#include<stdio.h>
int main()
{
	int tc,ca,d,i;
	float p,a;
	printf("Hi \n");
	printf("My Name is Attendace Manager \n");
	printf("I will help you to keep your attendence on track \n");
	printf("Please enter total number of classes\n");
	scanf("%d",&tc);
	printf("Please enter the number of classes you have attended \n");
	scanf("%d",&ca);
	p=ca/(float)tc*100;
	printf("Your attendence percent is %.2f \n",p);
	if(p>=75.00 && p<100)
	{
		printf("You are on track\n");
	    while(p>=75.00)
	    {
		   tc++;
		   p=ca/(float)tc*100;
		   if(p>=75.00)
		   {
		   	i++;
		   }
		   else
		   {
		      break;
	       }
	    }
           printf("You may leave next %d classes \n",i);
    }
      else if(p<75.00)
      {
      	printf("You are not on track \n");
	      while(p<=75.00)
	      {
	      	tc++;
	      	ca++;
	      	p=ca/(float)tc*100;
	      	if(p<=75)
	      	{
	      	  i++;
	        }
	         else
	         {
	         	break;
			 }
		  }
		      printf("Attend next %d classes to get back on track \n",i);
      }
         else
         {
         	printf("Error total classes cannot be more than classes attended \n");
         }
}
 
