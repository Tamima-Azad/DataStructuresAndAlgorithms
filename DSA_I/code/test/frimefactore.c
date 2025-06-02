#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
    int flag =0;
        if(n%i==0){
        for(int j=2;j<i;j++){
            if(i%j==0){
            if(i<=2)break;
                    flag=1;
            }
        }
if(flag==0) printf("%d ",i);
    }

}
return 0;
}
