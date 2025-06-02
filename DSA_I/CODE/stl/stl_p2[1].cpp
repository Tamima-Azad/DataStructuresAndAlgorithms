#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c;
    cin >> c;
    vector < int > vec(c);
    int n;
    int x;
    cin >> n;
    for(auto &i : vec)cin >> i;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        vec.push_back(x);
    }
    cout << vec.size() << endl;
    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << *vec.begin() << endl;
    cout << *vec.end() << endl;
    for(auto i:vec)cout << i << " ";
}

