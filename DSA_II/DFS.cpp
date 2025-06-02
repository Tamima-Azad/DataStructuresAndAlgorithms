//DFS
#include<bits/stdc++.h>
using namespace std;
const int N=100002;
vector<int>adj[N];
bool visited[N];
void dfs(int Node){
    //preorder
    visited[Node]=1;
    cout<<Node<<" ";
    //inorder
 /*   vector<int>::iterator it;
    for(it=adj[Node].begin();it!=adj[Node].end();it++){
        if(visited[*it]);
        else dfs(*it);
    }*/
     for(auto i:adj[Node]){
        if(visited[i]);

            else{
              dfs(i);
            }

     }
   // postorder
    // cout<<Node<<" ";
}
int main(){

    int n,m,x,y;
    cin>>n>>m;
    for(int i=0;i<=n;i++){
        visited[i]=false;
    }
    for(int i=0;i<m;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);
    //cout<<node<<" ";
}
