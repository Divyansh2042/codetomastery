#include<stdio.h>
int main()
{
    int i,f=0,ns,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    scanf("%d",&ns);
    for(i=0;i<n;i++)
    {


    if(ns==a[i])
    {
        f++;
        break;
    }
    }
    if(f==1)
    printf("searched no. found ");
    else
    printf("Not found");
}