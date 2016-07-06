#include<stdio.h>
#include<conio.h>
int main()
{
 int res=0,num,i;
 clrscr();
 printf("Enter num");
 scanf("%d",&num);
 for(i=1;i<=10;i++)
  res=num*i;
 printf("\n Result:%d*%d=%d",res,num,i);
 getch();
 return 0;
}
