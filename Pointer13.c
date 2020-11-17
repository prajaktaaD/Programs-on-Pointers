#include<stdio.h>                                

void main()

{
  char ch[10],*p=ch,*q,m;
  int i,c=0;

  printf("\nEnter string:");
  scanf("%s",ch);

  for(p=ch;*p!=0;p++)
  c++;//length of ch

  for(p=ch;*p!=0;p++);//place pos of pointer p end of string ch.
  p--;//pos of p before \0

  for(i=0,q=ch;i<c/2;i++,q++,p--) 
                             

  /*loop will run till half 
    Count of string*/

     {
       m=*q;

      *q=*p;                     
      *p=m;

     }
  q=ch;//reinitializing q pointer
  printf("\nReverse string:%s\n",q);
}

