#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int b;cin>>b;
        v.push_back(b);
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"size = "<<v.size()<<endl;
    cout<<"front = "<<v.front()<<endl;
    cout<<"capacity = "<<v.capacity()<<endl;
    cout<<"end = "<<v.back()<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<"after pop :"<<endl;
    cout<<"size = "<<v.size()<<endl;
    cout<<"front = "<<v.front()<<endl;
    cout<<"capacity = "<<v.capacity()<<endl;
    cout<<"end = "<<v.back()<<endl;
    //cout<<"4th position = "<<v.at()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
