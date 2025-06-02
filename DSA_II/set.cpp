#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    set<int>s;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        s.insert(a);
    }
    set<int,greater<int>>ss(s.begin(),s.end());
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    //set<int,greater<int>>ss;
    for(auto i:ss){
        cout<<i<<" ";
    }
    cout<<endl;
}