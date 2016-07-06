#include<stdio.h>
#include<conio.h>
int main()
{
int i,sum=0,num;
clrscr();
printf("\n Enter a number: ");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
sum=sum+i;
}
printf("Sum=%d",sum);
getch();
return 0;
}
