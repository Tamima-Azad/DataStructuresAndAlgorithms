#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int temp=0;
    for(int i=1;i<n;i++){
        temp=a[i];
        int j=i-1;
        while(j>=0&&temp<a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}*/
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
            cin>>a[i];
    }
    int temp=0,c=0;
    for(int i=1;i<n;i++){
        temp=a[i];
        int  j=i-1;
        while(j>=0&&temp>a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
        c++;
    }
    cout<<c<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
