#include<stdio.h>
void main()
{
  char str[10],*p=str;
  
  printf("\nEnter the string:");
  scanf("%s",p);

  for(p=str;p!=0;p++)
  {
    if(*p>='a'&&*p<='z')
    *p=*p-32;
  }

  printf("\nThe string in upper case:%s\n",str);
}

