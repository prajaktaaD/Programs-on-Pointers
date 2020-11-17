#include<stdio.h>
void main()
{
  int num,*p;
  p=&num;

  printf("\nEnter num:");
  scanf("%d",p);


  printf("\nnum:");
  printf("%d",*p);
}
