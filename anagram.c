#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,j,k,n,count=0;
    char a[100],b[100];
    printf("enter the two strings\t");
    gets(a);
    gets(b);
    k=strlen(a);
    n=strlen(b);
    for(i=0;i<k;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                count=count+1;
                break;
            }
        }
    }
    if((count==k)&&(k==n))
    {
        printf("anagram");
    }
    else
    {
        printf("not anagram");
    }
}

