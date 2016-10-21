#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter the year:");
scanf("%d",&a);
if(a%4==0)
{
printf("a is leap year",a);
}
else
{
printf("a is not a leap year",a);
}
getch();
}
