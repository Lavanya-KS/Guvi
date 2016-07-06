#include<stdio.h>
#include<conio.h>
int main()
{
 int n,count=0,digit;
 clrscr();
 printf("\n Enter a number:");
 scanf("%d",&n);
 while(n>0)
 {
	digit=n%10;
	count=count+1;
	n=n/10;
 }
 printf("\n Number of digits of a number: %d",count);
 getch();
 return 0;
}
