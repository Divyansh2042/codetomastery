#include<stdio.h>
int main()
{
    int i,j,max,temp,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);

}
for(i=0;i<n-1;i++)
{
    for(j=i+1;j<n;j++)

    {
        max=i;
        if(max<a[i])
        {
            max=j;
        }
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
}
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
}