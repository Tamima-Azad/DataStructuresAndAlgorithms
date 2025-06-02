#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=0;i<b;i++)
#define ff first
#define ss second
bool cmp(pii p1,pii p2){
    double v1=(double)p1.ff/p1.ss;
    double v2=(double)p2.ff/p2.ss;
    return v1>v2;
}
int main(){
    int n;cin>>n;
    vii a(n);
    rep(i,0,n){
        cin>>a[i].ff>>a[i].ss;
    }
    int w;cin>>w;
    
    int s=0;
    map<int,int>m;
    sort(a.begin(),a.end(),cmp);
    rep(i,0,n){
        if(w>=a[i].ss){
            s+=a[i].ff;
            w-=a[i].ss;
            m[a[i].ff]=a[i].ss;
            continue;
        }
        double vw=(double) a[i].ff/a[i].ss;
        m[vw]=w;
        s+=vw*w;
        w=0;
        break;
    }
    cout<<s<<endl;
    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}