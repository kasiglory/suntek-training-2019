#include<stdio.h>
#include<string
void main()
{
    int i,j=0,k,tem,p=0,n;
    char a[100];
    gets(a);
    k=strlen(a);
    n=(k+1)/2;
    for(i=0;i<=n;i++)
    {
        for(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        {
            continue;
        }
        else
        {
            for(j=k;j>=n;j--)
            {
                if(a[j]=='a' || a[j]=='e' || a[j]=='i' || a[j]=='o' || a[j]=='u')
                {
                    continue;
                }
                else
                {
                    tem=a[i];
                    a[i]=a[j];
                    a[j]=a[i];
                }
            }
        }
    }
    puts(a);
}
