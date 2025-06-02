#include<stdio.h>
int main()
{
    int n,position,value;
    scanf("%d%d%d",&n,&position,&value);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=n;i>=position;i--){
        arr[i]=arr[i-1];
    }
    arr[position-1]=value;
    for(int i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

