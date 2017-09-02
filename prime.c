#include<stdio>
int main()
(
 int n ,i = 3;
 count c;
 printf ("enter the number of primenumbers required/n")
 scanf("%d",&n);
 if (n>=1)
 {
 printf("%d prime numbers are:\n",n)
 printf("2\n");
 }
 for (c = 2 ; c<=n;)
 {
   for(c=2;c<=i-1;c++)
   {
    if(i%c==0)
    break;
    }
    if(c==i)
    {
    printf("%d\n",i);
    count++;
    }
    i++;
   
 return 0;
