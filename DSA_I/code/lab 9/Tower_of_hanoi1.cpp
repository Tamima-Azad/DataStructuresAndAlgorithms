#include<bits/stdc++.h>
using namespace std;
int  tower(int n,char a,char b,char c)
{
    int Count=1;
    if(n==1) {cout<<'\n'<<a<<" to "<<c<<endl;
    return Count;}
    else{
    Count+=tower(n-1,a,c,b);

    cout<<a<<" to "<<c<<endl;
    Count+=tower(n-1,b,a,c);

}
return Count;
}
int main()
{
    int n;
    cin>>n;
    char a='A',b='B',c='C';
    int Count=tower(n,a,b,c);
    cout<<Count<<endl;
    return 0;
}
