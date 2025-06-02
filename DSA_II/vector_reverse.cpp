#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int b;cin>>b;
        v.push_back(b);
    }
    cout<<"Reverse : "<<endl;
    for(auto i=v.rbegin();i<v.rend();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    return 0;
}
