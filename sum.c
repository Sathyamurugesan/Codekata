#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,s=0;
clrscr();
printf("Enter the number:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
s=s+i;
}
printf("Sum is %d",s);
getch();
}
