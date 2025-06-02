#include<bits/stdc++.h>
using namespace std;
struct edge{
    int src,dst,wt;
};
int V,E;
void bellmanFord(vector<edge>& Edges,int source){
    int parent[V];
    int cost_parent[V];
    vector<int> value(V,INT_MAX);

    parent[source]=-1;
    value[source]=0;

    bool updated;
    for(int i=0;i<V-1;++i){
        updated=false;
        for(int j=0;j<E;++j){
            int U=Edges[j].src;
            int V=Edges[j].dst;
            int wt=Edges[j].wt;
            if(value[U]!=INT_MAX and value[U]+wt<value[V]){
                value[V]=value[U]+wt;
                parent[V]=U;
                cost_parent[V]=value[V];
                updated=true;
            }
        }
        if(updated==false) break;
    }
    for(int j=0;j<E and updated==true;++j){
            int U=Edges[j].src;
            int V=Edges[j].dst;
            int wt=Edges[j].wt;
        if(value[U]!=INT_MAX and value[U]+wt<value[V]){
            cout<<"Graph has -VE edge cycle\n";
            return;
        }
    }
    // for(int i=0;i<V;++i){
    //     cout<<"U->V: "<<parent[i]<<"->"<<i<<" Cost to reach "<<parent[i]<<"from source 0 = "<<value[i]<<endl;
    // }
    for (int i = 0; i < V; i++)
    cout << i << " -> " << value[i] << endl;
}
int main(){
    //cout<<"Enter no of nodes and edges: "<<endl;
    cin>>V>>E;
    vector<edge> Edges(E);
    int s,d,w;
    //cout<<"Enter src, dst,cost: "<<endl;
    for(int i=0;i<E;++i){
        cin>>s>>d>>w;
        Edges[i].src=s;
        Edges[i].dst=d;
        Edges[i].wt=w;
        //Edges.push_back(edge(s,d,w));
    }
    //cout<<"Enter Starting Node: "<<endl;
    int source; cin>>source;
    bellmanFord(Edges,source);
    return 0;
}
