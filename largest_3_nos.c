#include<stdio.h>
#include<conio.h>
int main()
{
 int n1,n2,n3;
 clrscr();
 printf("\n Enter 3 numbers: ");
 scanf("%d %d %d",&n1,&n1,&n3);
 if((n1>n2)&&(n1>n3))
  printf("\n n1 is greatest");
 else if((n2>n1)&&(n2>n3))
  printf("\n n2 is greatest");
 else
  printf("\n n3 is greatest");
 getch();
 return 0;
}
