#include<bits/stdc++.h>
using namespace std;
int n,par[10000];
int findrep(int r){
    if(par[r]==r){
        return r;
    }
    return findrep(par[r]);
}
void Union(int u,int v){
    int p=findrep(u);
    int q=findrep(v);
    //if(p!=q)
        par[p]=q;
        return;
  // par[u]=v;
    //return;
}
vector<pair<int,pair<int,int>>>edges;
int main(){
    int t;cin>>t;
    while(t--){
        int n,e;
    //cout<<"Enter no of nodes & edges :"<<endl;
    cin>>n>>e;
   // cout<<"Node 1-> Node 2-> Weight"<<endl;
    int u,v,c;
    for(int i=0;i<n;i++){
        par[i]=i;
    }
    while(e--){
        cin>>u>>v>>c;
        edges.push_back({c,{u,v}});
    }
    sort(edges.begin(),edges.end());
    int mst=0;

    for(int i=0;i<edges.size();i++){
        int u=edges[i].second.first;
        int v=edges[i].second.second;
         if(findrep(u)!=findrep(v)){
            Union(u,v);
            mst=mst+edges[i].first;
            cout<<"("<<u<<","<<v<<") = "<<edges[i].first<<endl;
         }
    }
   //cout<<"Minimum cost = "<<mst<<endl;
   cout<<mst<<endl;

    }
    
}