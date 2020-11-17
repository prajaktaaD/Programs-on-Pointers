#include<stdio.h>                                           
void main()                                                     


{
  int i,c1=0,c2=0,f=0;

  char str1[10],str2[10],*p=str1,*q=str2;

  
  printf("\nEnter str1:");
  scanf("%s",str1);
                                                             
                                                            
  printf("\nEnter str2:");                                                                       
  scanf("%s",str2);
                                               

  for(p=str1;*p!=0;p++)
  c1++; //length of str1

  for(q=str2;*q!=0;q++)
  c2++;  //length of str2

  if(c1==c2)
   {
     printf("\nEqual length:");
     for(p=str1,q=str2;*p!=0;p++,q++)
        {
          if(*p==*q)
          f++;      
        }
    }

  else
  printf("\nNot Equal length:");

  if(f==c1)   //check for each n every char  is matched.
  printf("and same!\n");

  else
  printf("and not same!\n");
}

