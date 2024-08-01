#define SIZE 5
#include<stdio.h>
void push();
int stack[SIZE];
int top= -1,val;
int main()
{
	int ch;
	printf("Enter your choice \n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:push();
			break;   
		default:printf("Wrong choice \n");
	}
}
void push()
{
	if(top==SIZE-1)
	{
		printf("Stack is full \n");
	}
	else
	{
		printf("Enter the value you want to put \n");
		scanf("%d",&val);
		top=top+1;
		stack[top]=val;
	}
	
}
