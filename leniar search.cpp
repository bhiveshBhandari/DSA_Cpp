#include <stdio.h>
int main()
{
  int array[10],search,i,n;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);

  printf("Enter %d integer\n", n);

  for (i=0;i<n;i++)
    scanf("%d",&array[i]);

  printf("Enter a number to search\n");    
  scanf("%d", &search);

  for (i=0;i<n;i++)
  {
    if (array[i] == search)    
    {
      printf("%d is present at location %d\n",search,i+1);
      break;
    }
  }
  if (i == n)
    printf("%d isn't present in the array\n", search);
}
