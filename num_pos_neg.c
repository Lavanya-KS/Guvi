#include<stdio.h>
#include<conio.h>
int main()
{
 int num;
 clrscr();
 printf("\n Enter a number:");
 scanf("%d",&num);
 if(num!=0)
 {
  if(num>0)
   printf("\n Number is positive");
  else
   printf("\n Number is negative");
 }
 else
  printf("\n Number is equal to zero");
 getch();
 return 0;
 }
 
