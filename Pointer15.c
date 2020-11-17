#include<stdio.h>
void main() 
{
  char st1[20],st2[20],st3[20],*p=st1,*q=st2;   


  int n,i;

  printf("\nEnter string1:");                   

  scanf("%s",st1);

  printf("\nEnter string2:");
  scanf("%s",st2);                              

  for(p=st1;*p!=0;p++);
  for(q=st3;*q!=0;q++,p++)                      


      *p=*q; //copying 1st string in 3rd string 
      *p=0;

  printf("\Enter the position where u want to concatinate:");
  scanf("%d",&n);

 for(i=0,p=st1;i<n;i++,p++);//positioning of pointer
 for(q=st2;*q!=0;q++,p++)              


     *p=*q;
//append at pos entered by user
     *p=0;

 for(p=st1;*p!=0;p++);
 for(q=st3,i=0;i<n;i++,q++);

/*loop will run till pos of pointer is placed where remaining 1st string is needed to be copied.*/

 for(i=n;*q!=0;i++,q++,p++)
    *p=*q;
    *p=0;

 printf("\nConcatenated:%s\n",st1);
}
