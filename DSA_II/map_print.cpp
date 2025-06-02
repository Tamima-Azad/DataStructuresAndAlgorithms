#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,string>m;
    m[1]="One";
    m[3]="Three";
    m[6]="Six";
    m[4]="Four";
    m[2]="Two";
    m.insert({5,"Five"});
    m.insert({8,"Eight"});
    m.insert({7,"Seven"});
    m.insert({10,"Ten"});
    m.insert({9,"Nine"});
    map<int,string>::iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<"size: "<<m.size()<<endl;
    auto val=m.find(5);
    cout<<"found : "<<val->first<<" "<<val->second<<endl;
    // if(m.find(11)!=m.end()){
    //     cout<<"present"<<endl;
    // }
    //  else cout<<"NOt present"<<endl;;
     if(m.empty())cout<<"Empty : "<<"YEs"<<endl;
     else cout<<"Empty : "<<"NO"<<endl;
     m.erase(8);
     m.erase(m.begin(),m.find(6));
     cout<<"after erase : "<<endl;
     for(auto i:m){
         cout<<i.first<<" "<<i.second<<endl;
    }
    m.clear();
    cout<<"after clear map size : "<<m.size()<<endl;
     return 0;
}
