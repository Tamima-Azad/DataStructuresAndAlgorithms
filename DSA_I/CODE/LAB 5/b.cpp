#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    while (n--){
        long long int a,b,c;
        cin >> a >> b >> c;
        vector<int>v;
        for(int i=0;i<=c;i*i){
            long long int l = (a^=i)-(b^=i);
            if(l<0)
            v.push_back(-l);
            else v.push_back(l);
        }
        sort(v.begin(),v.end());
        cout << v[0] << endl;
    }
    return 0;
}
