#include<bits/stdc++.h>
using namespace std;
int Tower(int n,char a,char b,char c)
{
    int Count=1;
    if(n==1){ cout<<a<<" to "<<c<<endl;
    return Count;}
    else{
        Count+=Tower(n-1,a,c,b);
        cout<<a<<" to "<<c<<endl;
        Count+=Tower(n-1,b,a,c);
    }
    return Count;
}
int main()
{
    int n;cin>>n;
    char A='a',B='b',C='c';
    int Count=Tower(n,A,B,C);
    cout<<'\n'<<Count<<endl;
}
