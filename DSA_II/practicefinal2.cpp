// // #include<bits/stdc++.h>
// // using namespace std;
// // #define p pair<int,int>
// // #define vii vector<pair<int,int>>
// // bool cmp(p pi,p pii){
// //     double p1=(double) pi.first/pi.second;
// //     double p2=(double)pii.first/pii.second;
// //     return p1>p2;
// // }

// // int main(){
// //     int n;cin>>n;
// //     vii a(n);
// //     for(int i =0;i<n;i++){
// //         cin>>a[i].first>>a[i].second;
// //     }
// //     int w;cin>>w;
// //     sort(a.begin(),a.end(),cmp);
// //     int s=0;
// //     map<int,int>m;
// //     for(int i=0;i<n;i++){
// //         if(w>=a[i].second){
// //             s+=a[i].first;
// //             w-=a[i].second;
// //             m[a[i].first]=a[i].second;
// //             continue;
// //         }
// //         double w1=(double)a[i].first/a[i].second;
// //         s+=w1*w;
// //         m[w1*w]=a[i].second;
// //         w=0;
// //         break;
// //     }
// //     cout<<s<<endl;
// //     for(auto i: m){
// //         cout<<i.first<<" "<<i.second<<endl;
// //     }
    

// // }

// #include <bits/stdc++.h>
// using namespace std;
// const int maxN = 1000;
// const int maxW = 1000;
// int dp[maxN][maxW];
// int knapsack(int n, int weight[], int value[], int W)
// {
//     if (n == 0 || W == 0)
//         return 0;
//     if (dp[n][W] != -1)
//     {
//         return dp[n][W];
//     }
//     if (weight[n - 1] <= W)
//     {
//         // duita option
//         // niye dekhbo, na niye dekhbo
//         int op1 = knapsack(n - 1, weight, value, W - weight[n - 1]) + value[n - 1];
//         int op2 = knapsack(n - 1, weight, value, W);
//         return dp[n][W] = max(op1, op2);
//     }
//     else
//     {
//         // ekta option
//         // na niyei dekhte hobe
//         int op2 = knapsack(n - 1, weight, value, W);
//         return dp[n][W] = op2;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int weight[n], value[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> weight[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cin >> value[i];
//     }
//     int W;
//     cin >> W;
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j <= W; j++)
//         {
//             dp[i][j] = -1;
//         }
//     }
//     cout << knapsack(n, weight, value, W) << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int k[100][100];
// int knapsack(int n, int capacity, int weight[], int value[]){
//     if(n==0 || capacity==0)return 0;
//     if(k[n-1][capacity] != -1)return k[n-1][capacity];
//     if(weight[n - 1] <= capacity){
//         int op1 = knapsack(n-1, capacity - weight[n-1], weight, value) + value[n-1];
//         int op2 = knapsack(n-1, capacity, weight, value);
//         return k[n-1][capacity] = max(op1,op2);
//     }
//     else {
//         int op1 = knapsack(n-1, capacity, weight, value);
//         return k[n-1][capacity] = op1;
//     }
// }
int main(){
    
    int n; cin >> n;
    int weight[n], value[n];
    for (int i = 0; i < n; i++) {
        cin >> weight[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> value[i];
    }
    int capacity; cin >> capacity;

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= capacity; j++){
            if(i==0||j==0) k[i][j] = 0;
        }
    }
    //cout << knapsack(n, capacity, weight, value);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= capacity; j++){
            if(weight[i-1] <= j) k[i][j] = max(k[i-1] [j-weight[i-1]] + value[i-1], k[i-1][j]);
            else k[i][j] = k[i-1][j];
        }
    }

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= capacity; j++){
            cout << k[i][j] << " ";
        }
        cout << endl;
    }


    int i = n, j = capacity;
    while(i!=0 and j!=0 ){
        if(k[i][j] != 0){
            if(k[i][j]==k[i-1][j]){
                i--;
                continue;
            }
            else if(k[i][j]==k[i][j-1]){
                j--;
                continue;
            }
            else{
                cout << weight[i-1] << " ";
                i--;
                j--;
            }
        }
    }
    cout << endl << k[n][capacity] << endl;
return 0;
}