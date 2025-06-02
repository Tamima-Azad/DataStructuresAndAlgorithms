#include<bits/stdc++.h>
using namespace std;
int knapsack(int c,int n,int p[],int wt[]){
    int k[n+1][c+1];
    for (int i = 0; i <= n; i++)
    {
        for(int w=0;w<=c;w++){
            if(i==0|| w==0) k[i][w]=0;
            else if(wt[i]<=w){
                k[i][w]=max(k[i-1][w],p[i]+k[i-1][w-wt[i]]);
            }
            else k[i][w]=k[i-1][w];
        }
    }
   // cout<<k[n][c]<<endl;
   
    //cout<<n<<" "<<c<<endl;
    for(int i=0;i<=n;i++){
        for(int j=1;j<=n+1;j++){
            cout<<k[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return k[n][c];
    // int x=0,y=0,f=0,a,b;
    // for(int i=n;i>=0;){
    //     for(int j=c;j>=0;){
    //         cout<<k[i][j]<<" ";
    //         if(k[i][j]==k[i-1][j]) {
    //             i--;
    //         }
    //         else {
    //             x=k[i][j];
    //             a=i+1;

    //             //i--;
    //             int p=i-1;
    //             if(k[p][j]==k[p][j-1]){
    //                 j--;
    //             }
    //             else {
    //                 y=k[i][j];
    //                 b=j;
    //                 f=1;
    //                 break;
    //             }
    //         }
    //     }
    //    // cout<<endl;
    //    if(f==1) break;
    // }
    
    // cout<<n-x<<" "<<n-y-1<<endl;
    // cout<<a<<" "<<b;
}
int main(){
    int profit []={0,1,2,6,5 };//0,1,2,6,5    0,4,3,6,5
    int weight[]={0,2,3,4,5};//0,2,3,4,5     0,3,2,5,4
    int n=4,capacity=5,maxP;
    maxP=knapsack(capacity,n,profit,weight);
    cout<<"Max profit: "<<maxP<<endl;
    
}