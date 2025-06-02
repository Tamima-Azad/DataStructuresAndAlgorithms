#include<stdio.h>
int main()
{
    int n,s=0,x=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        x=pow(2,i);
        s+=x;
    }
    printf("%d",s);
}

