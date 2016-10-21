#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("Enter the character:");
scanf("%d",&ch);
if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
{
printf("The %c is Vowel",ch);
}
else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
{
printf("The %c is consonant",ch);
}
getch();
}
