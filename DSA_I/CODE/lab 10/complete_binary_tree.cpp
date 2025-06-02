#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the height of binary tree: ";
    int h;
    cin>>h;
    int node=(pow(2,h)-1);
    int l=pow(2,(h-1))-1;
    int arr[node];
    for(int i=0;i<node;i++){
        arr[i]=0;
    }
    cout<<"Enter parent node: ";
    cin>>arr[0];
    cout<<"Enter node: ";
    for(int i=0;i<l;i++){
            if(arr[i]!=0){
       cin>> arr[2*i+1];
       cin>>arr[2*i+2];}
    }
        for(int i=0;i<node;i++){
        cout <<i<<"="<<arr[i]<<", ";
    }
}

