#include<stdio.h>
void main()
{
 int i,n;
 int fact=1;
 printf("enter no");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   fact=fact*i;
   printf("the fact of %d is",n,fact);
   
 }
 
}
