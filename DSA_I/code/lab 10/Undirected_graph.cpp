#include <bits/stdc++.h>
using namespace std;
int main(){
    cout << "The Number of Nodes : ";
    int n; cin >> n;
    cout << "The Number of Edges : ";
    int e; cin >> e;
    int ar[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ar[i][j] = 0;
        }
    }
    for(int i=0;i<e;i++){
        int a,b;
        cin >> a >> b;
        ar[a-1][b-1] = 1;
        ar[b-1][a-1] = 1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }

return 0;
}
