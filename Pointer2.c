#include<stdio.h>
void main()
{
  char ch,*p;
  p=&ch;

  printf("Enter charachter:");
  scanf("%c",p);

  printf("\nCharachter:%c",*p);
}


