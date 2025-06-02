#include<stdio.h>
int main()
{
    int n,v,p;
    scanf("%d %d %d",&n,&p,&v);
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=n;i>p;i--)
    {
        a[i]=a[i-1];
    }
    a[p]=v;
    for(int i=0;i<n+1;i++)
    {
        printf("%d ",a[i]);
    }

}
