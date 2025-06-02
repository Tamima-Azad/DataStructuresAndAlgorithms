#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    if(n<m) m^=n^=m^=n;
    int c=0;
    for(int i=m;i<=n;i++){
           int f=0;
        for(int j=2;j<i;j++){
            if(i%j==0) {
            f=1;
        }}
        if(f==0) {
        c++;
        printf("%d ",i);
        }

}
printf("\n%d",c);
}
