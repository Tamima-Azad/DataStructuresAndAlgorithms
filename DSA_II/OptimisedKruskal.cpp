#include<bits/stdc++.h>
using namespace std;
const int Mx=1e6;
int sz[Mx],parent[Mx];
void make(int v){
    parent[v]=v;
    sz[v]=1;
}
int find(int v){
    if(parent[v]==v) return parent[v];
    else return parent[v]=find(parent[v]);
}
void Union(int a, int b){
    a=find(a);
    b=find(b);
    if(a!=b){
        if(sz[a]<sz[b]){
            swap(a,b);
        }
        parent[b]=a;
        sz[a]+=sz[b];
    }
}
int main ()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
        int n,r;
        cin>>n>>r;
        vector<pair<int,int>>p(n);
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            p[i]={a,b};
            make(i);
        }
        vector<pair<double,pair<int,int>>>vec;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int u=p[i].first-p[j].first;
                int v=p[i].second-p[j].second;
                double o=sqrt(u*u+v*v);
                vec.push_back({o,{i,j}});
            }
        }
        sort(vec.begin(),vec.end());
        double mstroad=0,mstrail=0;
        int roadcount=0,railcount=0;
        for(auto i:vec){
            int u=i.second.first;
            int v=i.second.second;
            double c=i.first;
            if(find(u)!=find(v)){
                Union(u,v);
                if(c>r){
                    mstrail+=c;
                    railcount++;
                }
                else{
                    mstroad+=c;
                    roadcount++;
                }
            }
        }
        cout<<"Case #"<<k<<": "<<n-roadcount<<' '<<round(mstroad)<<' '<<round(mstrail)<<endl;
    }   
    return 0;
}