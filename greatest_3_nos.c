#include<stdio.h>
#include<conio.h>
int main()
{
 int num1,num2,num3;
 clrscr();
 printf("\n Enter 3 numbers: ");
 scanf("%d %d %d",&num1,&num2,&num3);
 if((num1>num2)&&(num1>num3))
  printf("\n num1 is greatest");
 else if((num2>num1)&&(num2>num3))
  printf("\n num2 is greatest");
 else
  printf("\n num3 is greatest");
 getch();
 return 0;
}
