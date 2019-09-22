#include<stdio.h>
int hcf(int n1,int n2);
int main()
{
   int a,b,i,n,gcd1;
   scanf("%d %d", &a, &b);
   printf("%d\n",gcd(a,b));
   if(a>b)
   {n=b;}
   else
   {n=a;}
   for(i=1;i<=n;i++)
   {
       if(((a%i)==0)&&((b%i)==0))
       {
           gcd1=i;
       }
   }
   printf("%d",gcd1);
   return 0;
}
int gcd(int x,int y)
{
    if (y != 0)
       return gcd(y,x%y);
    else
       return x;
}
