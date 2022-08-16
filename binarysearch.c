#include<stdio.h>
int main()
{
    int i,mid,low,high,n,ns,f=0;
    scanf("%d",&n);
    low=0,high=n-1;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&ns);
    while(low<=high)
    {
      mid=(low+high)/2;
      if(a[mid]<ns)
      {
       low=mid+1;
      }
      else
      if(a[mid]==ns)
      {
       printf("%d found at %d",ns,mid+1);
       break;
      }
      else 
      high=mid-1;
      mid=(low+high)/2;
    }
 if(low>high)
 printf("Not found");

      
    }
