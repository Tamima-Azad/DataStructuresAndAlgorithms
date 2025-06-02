#include<bits/stdc++.h>
using namespace std;
class edge{
    public:
    int u,v,c;
    edge(int ut,int vt,int ct){
        u=ut;
        v=vt;
        c=ct;
    }
};
const int N=1e5+5;
int dis[N];
int parent[N];
int cost_parent[N];
int main(){
    int n,e;cin>>n>>e;
    vector<edge>Edges;
    while(e--){
        int u,v,c;
        cin>>u>>v>>c;
        Edges.push_back(edge(u,v,c));
    }
    for(int i=0;i<n;i++){
        dis[i]=INT_MAX;
    }
    int src;cin>>src;
    dis[src]=0;
    parent[src]=-1;
    cost_parent[src]=0;
    bool update;
    for(int i=1;i<n-1;i++){
        update=false;
        for(auto ed:Edges){
            int u,v,c;
            u=ed.u;
            v=ed.v;
            c=ed.c;
            if(dis[u]<INT_MAX&&dis[u]+c<dis[v]){
                dis[v]=dis[u]+c;
                parent[v]=u;
                cost_parent[v]=dis[v];
                update=true;
            }
        }
        if(!update) break;
    }
    if(update){
        for(auto ed:Edges){
            int u,v,c;
            u=ed.u;
            v=ed.v;
            c=ed.c;
            if(dis[u]<INT_MAX&&dis[u]+c<dis[v]){
                cout << "Cycle found. No answer" << endl;
                return 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    cout << i << " -> " << dis[i] << endl;
    
    return 0;
}