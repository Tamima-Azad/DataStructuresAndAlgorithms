#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map<string,int>m;
    for(int i=0;i<n;i++){
        m[v[i]]++;
    }
    for(auto i:m){
        cout<<i.first<<" = "<<i.second<<endl;
    }
}
