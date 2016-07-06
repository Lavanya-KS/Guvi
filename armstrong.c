#include<stdio.h>
#include<conio.h>
int main()
{
int ams=1,rem=0,num,n1=0;
clrscr();
printf("\n Enter a number:");
scanf("%d",&num);
n1=num;
while(num>0)
{
rem=num%10;
ams=(ams*ams*ams)+rem*10;
num=num/10;
}
if(n1==ams)
 printf("Armstrong number");
else
 printf("Not an Armstrong number");
getch();
return 0;
}
