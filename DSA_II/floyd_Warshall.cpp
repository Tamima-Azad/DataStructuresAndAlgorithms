#include<bits/stdc++.h>
using namespace std;
const int N=1e4;
int dis[N][N];
int main(){
    for (int i = 0; i < N; i++)
    {
        for(int j=0;j<N;j++){
            if(i!=j) dis[i][j]=10000;
            else dis[i][j]=0;
        }
    }
    int n,e; cin>>n>>e;
    while(e--){
        int u,v,c; cin>>u>>v>>c;
        dis[u][v]=c;
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(dis[i][j]>dis[i][k]+dis[k][j]){
                    dis[i][j]=dis[i][k]+dis[k][j];
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<dis[i][j]<<" ";
        }
        cout<<endl;
    }
    
}