#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,f=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    cin >> s;
    for(int i=0;i<n;i++){
        if(a[i]==s){
        cout << "founding posiition = "<< i << endl;
        f=1;
        break;
        }
    }
    if(f==0)
    cout << "not found";
}
