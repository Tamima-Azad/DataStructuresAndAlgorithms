#include<stdio.h>
int main()
{
    int x,k;
    scanf("%d %d",&x,&k);
    if(x%k!=0)
        printf("1\n%d",x);
    else printf("2\n1 %d",x-1);
    return 0;
}
