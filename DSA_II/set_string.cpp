#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    istringstream ss(s);
    string word;
    set<string>se;
    while(ss>>word){
     se.insert(word);
    }
    cout<<"Unique words : "<<se.size()<<endl;
    cout<<endl;
    for(auto i:se){
        cout<<i<<" ";
    }
}
