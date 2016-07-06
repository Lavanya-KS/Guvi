#include<stdio.h>
#include<conio.h>
int main()
{
 int num;
 clrscr();
 printf("\n Enter a number:");
 scanf("%d",&num);
 if(num%2==0)
  printf("\nNumber is even");
 else
  printf("\nNumber is odd");
 getch();
 return 0;
}
