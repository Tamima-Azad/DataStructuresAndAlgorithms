#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int dis[N];
vector<pair<int,int>>adj[N];
class cmp{
    public:
    bool operator()(pair<int,int>a,pair<int,int>b){
        return a.second>b.second;
    }
};
void dijsktra(int s){
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
    pq.push({s,0});
    dis[s]=0;
    while(!pq.empty()){
        pair<int,int>f=pq.top();
        pq.pop();
        int nodecost=f.second;
        int node=f.first;
        if(dis[node]<nodecost) continue;
        for(auto child:adj[node]){
            int childcost=child.second;
            int childnode=child.first;
            if(dis[childnode]>childcost+nodecost){
                dis[childnode]=childcost+nodecost;
                pq.push({childnode,dis[childnode]});
            }
        }
    }
}
int main(){
    int n,e;cin>>n>>e;
    
    while(e--){
        int u,v,c;cin>>u>>v>>c;
        adj[u].push_back({v,c});
        adj[v].push_back({u,c});
    
    }
    for(int i=0;i<n;i++){
        dis[i]=INT_MAX;
    }
    int s;cin>>s;
    dijsktra(s);
    for (int i = 0; i < n; i++)
    {
        cout << i << "-> " << dis[i] << endl;
    }
    return 0;
}