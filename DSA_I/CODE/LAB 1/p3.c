#include<stdio.h>
int main()
{
    int n,p;
    scanf("%d%d",&n,&p);
    int a1[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a1[i]);
    for(int i=p;i<n-1;i++)
    {
        a1[i]=a1[i+1];
    }
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",a1[i]);
    }
}

