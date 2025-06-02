#include<bits/stdc++.h>
using namespace std;
static int f=-1,r=-1,que[100],x,i,n;

int main()
{
    cin>>n;
    que[n];
    //enqueue.
    if((r==n-1&&f==-1)||f=r+1){
        cout<<"overflow"<<endl;
        return;
    }
    else if(f==-1&&r==-1){
        f=0;
        r=0;
    }
    else if(r==n-1&&f>0){
        r=0;
    }
    else {
        r+=1;
    }
    cin>>x;
    que[r]=x;
}
