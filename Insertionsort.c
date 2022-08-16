#include<stdio.h>
int main()
{
    int i,j,temp,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && temp<=a[j])
        {
            a[j+1]=a[j];
            j=i-1;

        }
        a[j+1]=temp;
    }
    for(i=0;i<n;i++)
    {
   printf("%d",a[i]);
    }
}