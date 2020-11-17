#include<stdio.h>
void main()
{
  int cc=0,cv=0;
  char str[10],*p=str;

  printf("\nEnter string:");
  scanf("%s",str);

 for(p=str;*p!=0;p++)
  {
    if(*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U'||
       *p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u')
     
    cv++;

    else
    cc++;
  }
 printf("\nCount of vowels:%d \nCount of Consonents:%d",cv,cc);
}

