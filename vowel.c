#include<stdio.h>
#include<conio.h>
int main()
{
 char ch;
 clrscr();
 printf("\n Enter a character:");
 scanf("%c",&ch);
 if(ch==('a'||'A')||ch==('e'||'E')||ch==('i'||'I')||ch==('o'||'O')||ch==('u'||'U'))
  printf("\nCharacter is vowel");
 else
  printf("\nCharacter is consonant");
 getch();
 return 0;
}
