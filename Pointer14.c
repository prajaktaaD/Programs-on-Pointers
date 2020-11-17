#include<stdio.h>
void main()
                                       


{
  char st1[20],st2[20],*p=st1,*q=st2;

  printf("\nEnter string1:");                   


  scanf("%s",st1);                          


  printf("\nEnter string2:");
  scanf("%s",st2);

  for(p=st1;*p!=0;p++);
//pos pointer at end of 1st string.

  for(q=st2;*q!=0;q++,p++)
      *p=*q; 
      *p=0;//adding null

 printf("\nConcatenated:%s\n",st1);
}
