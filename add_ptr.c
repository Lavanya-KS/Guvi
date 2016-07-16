#include<stdio.h>
int main()
{
int a,b,*x,*y,sum;
printf("Enter two numbers to add\n");
scanf("%d%d",&a,&b);
x=&a;
y=&b;
sum=*x+*y;
printf("Sum of the entered numbers=%d",sum);
return 0;
}
