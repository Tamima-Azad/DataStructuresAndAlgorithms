#include<stdio.h>
int main()
{
    int m,n,p,q;
    scanf("%d %d %d %d",&m,&n,&p,&q);
    int a[m+n],a1[m+n+p];
    for(int i=0;i<m+n;i++){
        if(i<m) a[i]=1;
        else a[i]=4;
        printf("%d ",a[i]);
    }
    printf("\n");
    int j=0;
    for(int i=0;i<m+n+p;i++){
        if(i>=q&&i<p+q)
        a1[i]=3;
        else {
            a1[i]=a[j];
            j++;}
        printf("%d ",a1[i]);
}
}
