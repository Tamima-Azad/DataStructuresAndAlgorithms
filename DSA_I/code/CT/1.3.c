#include<stdio.h>
int main()
{
    int n,a[50],c=0;
    scanf("%d",&n);
    while(n>0){
        a[c]=n%10;
        n/=10;
        c++;
    }
    if(a[1]==7&&a[c-2]==7) printf("YES\n");
    else printf("NO\n");
}
