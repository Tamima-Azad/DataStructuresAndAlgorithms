#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i=1;
    while(i<=n){
        scanf("%d",&arr[i]);
        i++;
    }
    i=1;
    while(i<=n)
    {
        printf("%d ",arr[i]);
        i++;
    }
}
