#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>v1;
    vector<int>v2;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v1.push_back(x);
        v2.push_back(i+1);
    }
    sort(v1.begin(),v1.end());
    int c=0;
    for(int i=0;i<n;i++){
        if(v1[i]==v2[i])c++;
    }
    if(c==n)cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
