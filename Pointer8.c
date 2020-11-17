#include<stdio.h>
void main()
{
  char str1[10],str2[10],*p=str1,*q=str2;                     


  printf("\nEnter string1:");    

  scanf("%s",str1);

  for(p=str1,q=str2;*p!=0;p++,q++)                           
  *q=*p;                          

  *q=0;	
  printf("\nString2:%s\n",str2);
}
