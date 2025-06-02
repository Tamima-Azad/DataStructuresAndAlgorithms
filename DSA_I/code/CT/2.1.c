#include<stdio.h>l
int main()
{
    int n;
    scanf("%d",&n);
    char a[n],d=0;
    scanf("%s",&a);
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
      if(a[j]>a[i]){
        d=a[i];
        a[i]=a[j];
        a[j]=d;
      }
    }


}
printf("%s",a);

}
