#include<stdio.h>
int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int a1[n1],a2[n2],a3[n1+n2];
    for(int i=0;i<n1;i++)
    scanf("%d",&a1[i]);
    for(int i=0;i<n2;i++)
        scanf("%d",&a2[n2]);
        int j=0;
    for(int i=0;i<n1+n2;i++){
        if(i<n1) a3[i]=a1[i];
        if(i>=n1){
            a3[i]=a2[j];
        j++;}
    }
    for(int i=0;i<n1+n2;i++)
        printf("%d ",a3[i]);
    return 0;
}
