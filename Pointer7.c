#include<stdio.h>
void main()
{
  char str[5],*p;
  int i=0;
  
  printf("\nEnter a string:");
  scanf("%s",p);

  printf("\nDisplay:");
  printf("%s",str);

  for(p=str;*p!=0;p++)
  i++;

  printf("\nThe length of string :%d",i);
}
