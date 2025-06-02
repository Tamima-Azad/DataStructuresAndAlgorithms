#include<bits/stdc++.h>
using namespace std;
struct cmp{
    bool operator()(auto a,auto b)const{
    double pi=(double)a.first/a.second;
    double pii=(double)b.first/b.second;
        return pi>pii;
    }

};


int main(){
    int n;cin>>n;
    int o[n],p[n],w[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    for(int i=0;i<n;i++){
        cin>>w[i];
    }
    int capacity;cin>>capacity;
    map<int,int,cmp>m1;
    for(int i=0;i<n;i++){
        m1[p[i]]=w[i];
    }
    int s=0;
    map<int,double>m;
    for(auto i: m1){
        if(capacity>=i.second){
            s+=i.first;
            capacity-=i.second;
            m[i.first]=i.second;
            continue;
        }
        double w=((double) i.first)/i.second;
        s+=w*capacity;
        m[i.first/i.second]=w*capacity;
        capacity=0;
        break;

    }
    cout<<s<<endl;
    for(auto i: m1){
        cout<<i.first<<" "<<i.second<<endl;
    }

}