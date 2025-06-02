#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int>m;
    for(int i=0;i<5;i++){
        int a,b;cin>>a>>b;
        m.insert(make_pair(a,b));
        //m[a]=b;
        //m.insert({a,b});
    }
    
   // cout<<endl;
   
    vector<pair<int,int> >v(m.begin(), m.end());
    reverse(v.begin(), v.end());
    // map<int,int>::reverse_iterator it;
    // for(auto it=m.rbegin();it!=m.rend();it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    for(auto i : v){
        cout<<"("<<i.first<<","<<i.second<<")"<<endl;
    }
    return 0;
}