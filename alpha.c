#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("Enter the character:");
scanf("%c",&ch);
if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
{
printf("The %c is alphabet",ch);
}
else
{
printf("The %c is not alphabet",ch);
}
getch();
}
