#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,j,k,n,count=0,c=0,l;
    char a[100],b[100];
    printf("enter a string");
    gets(a);
    k=strlen(a);
    for(i=0;i<k;i++)
    {
        for(j=0;j<k;j++)
        {
            if(a[i]==a[j])
                {count=count+1;}
        }
        for(j=0;j<=i;j++)
        {
            if(a[i]==a[j])
            {
              c++;
            }
        }
        if(c<2)
        {
            printf("%c = %d\n",a[i],count);
        }
        c=0;
        count=0;
    }
}
