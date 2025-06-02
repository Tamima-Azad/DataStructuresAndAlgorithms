#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
    int u,v,e,n,c;
    cin>>n>>e;
    int dist[10000]={INT_MAX};
    for(int j=0;j<10000;j++){
        dist[j]=INT_MAX;
    }
    vector<pair<int,int>>adj[10000];
    for(int i=0;i<e;i++){
        cin>>u>>v>>c;
        adj[u].push_back(make_pair(v,c));
        //adj[v].push_back(make_pair(u,c));
    }
    priority_queue<pair<int,int>>pq;
    int startNode;cin>>startNode;
    dist[startNode]=0;
    int d;cin>>d;
    pq.push({0,startNode});
    while(!pq.empty()){
        pair<int,int>p=pq.top();
        pq.pop();
        e=p.second;
        int ec=-(p.first);
        if(dist[e]<ec) continue;
        for(auto i: adj[e]){
            int cst=i.second;
            int v=-i.first;
            if(dist[v]>cst+dist[e]){
                dist[v]=dist[e]+cst;
                pq.push(make_pair(-dist[v],v));
            }
        }
       
    }
    if(dist[d]==INT_MAX) cout<<"NO"<<endl;
    else
        cout<<dist[d]<<endl;
    }
    return 0;
}
