#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> vec(n);
    for(auto &i : vec )
        cin >> i;
    for(auto i : vec)
        cout <<  i << " ";
}
