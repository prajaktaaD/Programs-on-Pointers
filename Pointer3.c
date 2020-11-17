#include<stdio.h>
void main()
{
  int i,a[5],*p=a;
 
  printf("\nEnter ele of array:\n");
  for(i=0;i<5;i++,p++)
  scanf("%d",p);

  p=a;
  printf("Dispaly:\n");
  for(i=0;i<5;i++,p++)
  printf("%d ",*p);
}
