#include<stdio.h>
void main()
{
  int i,j,a[5],*p=a,temp;

  printf("\nEnter ele of array:");
  for(i=0;i<5;i++,p++)
  scanf("%d",p);

  p=a;
  for(i=0;i<5;i++)
   {
     for(j=0;j<4;j++)
        {
          if(*(p+j)>*(p+j+1))
            {
              temp=*(p+j);
              *(p+j)=*(p+j+1);
              *(p+j+1)=temp;
            }
         }
     }
  printf("\nSorted array:");
  for(i=0;i<5;i++,p++)
  printf("%d ",*p);

  p--;
  printf("\nMax of array:%d",*p);
}

