#include <stdio.h>
 
int main()
{
  int array[100], n, c, d, swap,count=0;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
 
 
  for (c = 0; c < n; c++)
   array[c]=rand()%1000;
  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
		count++;
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for (c = 0; c < n; c++)
     printf("%d\n", array[c]);

	printf("no of comparisions are  :%d",count);
 
  return 0;
}