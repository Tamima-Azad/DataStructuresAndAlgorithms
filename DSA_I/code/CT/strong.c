#include<stdio.h>
int main()
{
    int a,c=0,p;
    for(int i=1;i<=50000;i++){
        a=i;int s=0;
    while(a){
        int r,f=1;
        r=a%10;
        a/=10;
        for(int i=1;i<=r;i++){
            f=f*i;
        }
        s+=f;
    }
    if(s==i){
            c++;
       p=s;
    printf("%d ",p);
}}
 printf("\n%d",c);

}
