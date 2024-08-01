//Dummy program
#include<stdio.h>
int main()
{
	int choice;
	printf("\n Press 1 for Insertion");
	printf("\n Press 2 for Deletion");
	printf("\n Press 3 for Display");
	printf("\n Press 4 for Exit ");
	do
	{
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Add");
				break;
			
			case 2:
				printf("Add");
				break;

			case 3:
				printf("Add");
				break;
				
			case 4:
				printf("Exit");
				break;	
			default:
				printf("Enter right choice\n");
		}
	}while(choice!=4);
	return 0;
}
