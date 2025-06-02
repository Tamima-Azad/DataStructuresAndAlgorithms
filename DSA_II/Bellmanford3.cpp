#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<pair<int,int>>v[100];
int ar[100][100];
int n, e;
int main(){
    
    cin >> n >> e;
    while(e--){
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b,c});
    }
    int src; cin >> src;
    ll dis[n];
    for(int i = 0; i < n; i++)dis[i] = INT_MAX;
    dis[src] = 0;
    bool update;
    
    for(int i = 0; i < n-1; i++){
        update = false;
        for(int j = 0; j < n; j++){
            for(auto node : v[j]){
                if(dis[j] < INT_MAX && node.second + dis[j] < dis[node.first] ){
                    dis[node.first] = node.second + dis[j];
                    update = true;
                }
            }
        }
    }
    if(update == true){
        for(int j = 0; j < n; j++){
            for(auto node : v[j]){
                if(dis[j] != INT_MAX and node.second + dis[node.first] < dis[node.second] ){
                    update = true;
                    break;
                }
            }
            if(update)break;
        }
    }  
    if(update)cout << "Negative Cycle Found" << endl;
    else   
    for(int i = 0; i < n; i++){
        if(dis[i] != INT_MAX)cout << i << " Node -> " << dis[i] << endl;
    }
    
return 0;
}