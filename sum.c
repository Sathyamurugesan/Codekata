#include<stdio.h>
#include<conio.h>
void main()
{
int i,num,sum=0;
clrscr();
printf("Enter the number:");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
sum=sum+i;
}
printf("Sum is %d",sum);
getch();
}
