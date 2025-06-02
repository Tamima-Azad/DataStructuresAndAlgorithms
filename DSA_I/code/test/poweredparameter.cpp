#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long int t; cin >> t;
    while(t--){
        long long int n; cin >> n;
        vector < long long int > v(n+1);
        long long int c = 0,cnt = 0;
        for(long long int i = 1; i <= n; i++)cin >> v[i];

        for(long long int i = 1; i <= n; i++){
            for(long long int j = 1; j <= n; j++){
                if(v[i]!=1&&j>31)j = n+1;
                else if(pow(v[i],j)>1e9) j = n+1;

                else if(pow(v[i],j) <= v[j] ){
                    c++;
                }
                cnt++;
            }
        }
        cout << c << endl;
    }
    return 0;
}
