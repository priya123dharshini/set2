#include<stdio.h>
void main()
{
int n,i;
printf("enter a no");
scanf("%d",&n);
i=0;
while(n!=0)
{
n=temp;
i=i*10;
i=i+temp%10;
temp=temp/10;
}
if(n==temp)
{
printf("the no is a palindrome");
}
}
