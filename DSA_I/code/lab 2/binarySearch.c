//binary search
#include<stdio.h>
int main()
{
    int n,mid=0,data;
    scanf("%d",&n);
    int a[n];
    for(int j=0;j<n;j++){
        scanf("%d",&a[j]);
    }
    scanf("%d",&data);
    int l=0,u=n-1,c=0;
    while(l<=u){
        mid=(l+u)/2;
        c++;
        if(data==a[mid]) {
            printf("found in %d index at iteration %d",mid,c);
            break;
        }
        else if(data<a[mid]){
            u=mid-1;
        }
        else {
            l=mid+1;
        }
    }
    if(l>u) printf("%d not found",data);
    return 0;
}
