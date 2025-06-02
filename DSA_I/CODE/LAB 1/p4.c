#include<stdio.h>
int main()
{
    int n,p,v;
    scanf("%d%d%d",&n,&p,&v);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    a[p]=v;
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}
