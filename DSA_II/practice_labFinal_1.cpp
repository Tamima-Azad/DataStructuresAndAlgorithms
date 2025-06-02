#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int>adj[N];
bool vis[N];
int cost[N];
int parent[N];
int level[N];
bool update;
void bfs(int src){
    queue<int>q;
    q.push(src);
    //vis[src]=true;
    cost[src]=0;
    parent[src]=-1;
    level[src]=0;
    update=false;
    while(!q.empty()){
        int f=q.front();
        vis[f]=true;
        q.pop();
        cout<<f<<" parent= "<<parent[f]<<"cost= "<<cost[f]<<endl;
        for(auto i:adj[f]){
            if(vis[i]==true && parent[f]!=i){
                update=true;
            }
            if(!vis[i]){
            q.push(i);
            //vis[i]=true;
            parent[i]=f;
            cost[i]=cost[f]+1;
            level[i]=level[f]+1;
            }
        }
    }
}
void dfs(int src){
    stack<int>s;
    s.push(src);
    parent[src]=-1;
    while(!s.empty()){
        int f=s.top();
        s.pop();
        vis[f]=true;
        //preorder
        //cout<<f<<" ";
        for(auto child:adj[f]){
            if(!vis[child]){
                s.push(child);
                parent[child]=f;
            }
        }
        
        cout<<f<<" ";
    }
}
void dfs(int src){
    //preorder
    cout<<src<<" ";
    vis[src]=true;
    for(int child:adj[src]){
        if(vis[child]==true && child!=parent[src]){
            update=true;
        }
        if(!vis[child]){
            parent[child]=src;
            dfs(child);
        }
    }
    //postorder
    //cout<<src<<" ";
}

int main(){
    int nd,ed;cin>>nd>>ed;
    while(ed--){
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    int src,des;cin>>src;
    //cin>>des;
    //bfs(src);

    // int x=des;
    // vector<int>path;
    // while(x!=-1){
    //     path.push_back(x);
    //     x=parent[x];
    // }
    // reverse(path.begin(),path.end());
    // for(int val:path){
    //     //cout<<val<<" ";
    // }

    dfs(src);
}