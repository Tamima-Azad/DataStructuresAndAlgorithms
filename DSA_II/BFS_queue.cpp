//BFS_queue
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int node,edge,u,v;
    cin>>node>>edge;
    vector<int>adj[100];
    int visited[100]={0};
    int parent[100]={0};
    int cost[100]={0};
    for(int i=0;i<edge;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int s,d;
    cin>>s>>d;
    queue<int>q;
    q.push(s);
    visited[s]=1;
    parent[s]=1;
    cost[s]=0;
    while(!q.empty()){
        int f=q.front();
        q.pop();
        cout<<f<<" ";
        for(int i=0;i<adj[f].size();i++){
            int v1=adj[f][i];
            if(visited[v1]==0){
                q.push(v1);
            visited[v1]=1;
            parent[v1]=f;
            cost[v1]=cost[f]+1;
            }
        }
    }
    cout<<endl;
    cout<<cost[d]<<endl;
    cout<<parent[d]<<endl;
}
