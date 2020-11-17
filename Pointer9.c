#include<stdio.h>
void main()
{
  char str1[10],str2[10],*p=str1,*q=str2;                    


  printf("\nEnter a string:");   

  scanf("%s",str1);                 
                                   
  for(p=str1;*p!=0;p++);                                     

  p--;

  for(q=str2;p>=str1;q++,p--)
  *q=*p;
   
  *q=0;

  printf("\nThe string in revese order:%s\n",str2);
}
