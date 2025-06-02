/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
            for(int j=0;j<n-i;j++){
                printf(" ");
            }
            for(int j=2;j<=2*i;j++)
                printf("*");
            printf("\n");
    }
}
*/
#include<stdio.h>
int main() {
    int a,b; scanf("%d %d",&a,&b);
    //printf("%d\n",a%b);
   // try{
    if(b!=0&&a%b!=0) printf("%d",a%b);
    else printf("-1");
    return 0;
}
