//linear search
#include<stdio.h>
int main()
{
    int n,no,flag=0;
    scanf("%d %d",&n,&no);
    int a[n];
    for(int j=0;j<n;j++){
        scanf("%d",&a[j]);
    }
    int i,c=0;
    for(i=0;i<n;i++){
            c++;
        if(no==a[i]){
            printf("/n%d is found in %d positin & %d no. iteration",no,i-1,c);
            flag=1;
            break;
        }
    }
    if(flag==0) printf("not found");
    return 0;
}
/*#include<stdio.h>
int main()
{
    int n,no;
    scanf("%d %d",&n,&no);
    int a[n];
    for(int j=0;j<n;j++){
        scanf("%d",&a[j]);
    }
    int i,c=0;
    for(i=0;i<n;i++){
            c++;
        if(no==a[i]){
            printf("%d is found in %d positin %d of iteration",no,i-1,c);
            i=n+1;
            break;
        }
    }
    if(i!=n+1) printf("not found");
}

#include<stdio.h>
int main()
{
    int n,no;
    scanf("%d",&n);
    int a[n];
    for(int j=0;j<n;j++){
        scanf("%d",&a[j]);
    }
    scanf("%d",&no);
    int i,c=0;
    for(i=0;i<n;i++){
             c++;
        if(no==a[i]){
            printf("%d is found in %d position & %d no. iteration",no,i+1,c);
            return 1;
        }
    }
    printf("not found");
    return 0;
}
*/
