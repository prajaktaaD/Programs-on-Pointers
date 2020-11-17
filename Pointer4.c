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

  p=a;
  printf("\nNum at odd indexes are:\n");
  for(i=0;i<5;i++,p++)
   {
      if(i%2!=0)
      printf("%d ",*p);
   }
}


