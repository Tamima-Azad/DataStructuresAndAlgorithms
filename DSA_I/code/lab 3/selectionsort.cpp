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
    int mini=0,temp=0;
    for(int i=0;i<n-1;i++){
        mini=i;
        for(int j=i+1;j<n;j++){
            if(a[mini]>a[j]) mini=j;
        }
        if(mini!=i){
            swap(a[mini],a[i]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}*/

int main()
{
    int n;cin>>n;
    int a[n];
    //cin>>a[i];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }int mini=0,c=0;
    for(int i=0;i<n-1;i++){
        mini=i;
        for(int j=i+1;j<n;j++){
            if(a[mini]>a[j]) mini=j;
        }
        if(mini!=i){
            swap(a[i],a[mini]);
            c++;
        }
    }
    cout<<c<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
