#include<stdio.h>
int main()
{
    int n,position;
    scanf("%d%d",&n,&position);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=position-1;i<n;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}


