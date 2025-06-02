#include<stdio.h>
int main()
{
    int n,s=1,s1=1;
    scanf("%d",&n);
    for(int i=1;;i++)
    {
        printf("%d ",s);
        s1=s1+2;
        s=s+s1;

        if(i==n) break;
    }
}
