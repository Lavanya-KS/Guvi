#include<stdio.h>
#include<conio.h>
int main()
{
 int n,n1,rev=0,digit;
 clrscr();
 printf("\n Enter a number:");
 scanf("%d",&n);
 n1=n;
 while(n>0)
 {
	digit=n%10;
	rev=rev*10+digit;
	n=n/10;
 }
 if(n1==rev)
  printf("\n Given number is a palindrome");
 else
  printf("\n Given number is not a palindrome");
 getch();
 return 0;
}
