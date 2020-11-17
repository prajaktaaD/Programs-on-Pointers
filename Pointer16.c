#include<stdio.h>
void main()
{
  char ch[10],*p=ch,*q;
  int i,cnt=0,f=0;

  printf("\nEnter string :");
  scanf("%s",p);

  for(p=ch;*p!=0;p++)
  cnt++;//length of string

  for(p=ch;*p!=0;p++);
  p--;//pos before null

  for(i=0,q=ch;i<cnt/2;i++,q++,p--)
    {
      if(*p==*q)
      f++;
    }

  if(f==cnt/2)//check for condition all char are matched
  printf("\nPalindrome!");

  else
  printf("\nNot Palindrome!");
}
  




  

