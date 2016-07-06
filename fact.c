 #include<stdio.h>
 #include<conio.h>
 int main()
 {
  int i,fact=1,num;
  clrscr();
  printf("\n Enter a number: ");
  scanf("%d",&num);
  for(i=1;i<=num;i++)
      f=f*i;
  printf("Factorial of %d is: %d",num,f);
  getch();
  return 0;
}
