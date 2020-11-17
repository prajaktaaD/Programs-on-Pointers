#include<stdio.h>
void main()
{
  int i,a[5],*p=a,ce=0,co=0;
  
  printf("\nEnter ele of array:\n");
  for(i=0;i<5;i++,p++)
  scanf("%d",p);

  p=a;
  printf("Dispaly:\n");
  for(i=0;i<5;i++,p++)
  printf("%d ",*p);

  p=a;
  for(i=0;i<5;i++,p++)
   {
     if(*p%2==0)
     ce++;

     else  
     co++;
   }
  printf("\nCount of even:%d \nCount of odd:%d\n",ce,co);
}
