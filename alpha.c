#include<stdio.h>
#include<conio.h>
int main()
{
 char ch;
 clrscr();
 printf("\n Enter an alphabet: ");
 scanf("%c",&ch);
 if(isalpha(ch))
  printf("\n Character is a alphabet");
 else
  printf("\n Not an alphabet");
 getch();
 return 0;
}
