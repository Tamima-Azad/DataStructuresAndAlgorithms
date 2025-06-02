#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter total no of nodes: ";
    int n;cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=0;
        }
    }
    cout<<"No of edge: ";
    int e;cin>>e;
    for(int i=0;i<e;i++){
            int a,b;
    cin>>a>>b;
        arr[a-1][b-1]=1;
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

