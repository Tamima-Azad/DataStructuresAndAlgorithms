#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int j;
    vector <int>a;
    for(int i=0;i<n;i++){
        cin>>j;
        a.push_back(j);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
