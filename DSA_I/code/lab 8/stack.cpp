#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the size of stack ";
    int maxs;cin>>maxs;
    int stck[maxs];
    int Top=-1,item;
    while(1){
        cout<<"Enter the operation"<<endl;
    cout<<"1=Push\n2=Pop\n3==Display\n0=No operation"<<endl;
    int op;cin>>op;
    if(op==1){
        if(Top==maxs-1){
            cout<<"\nOverflow"<<endl;
            break;
        }
        else{
            cout<<"Enter push item ";
            cin>>item;
            Top++;
            stck[Top]=item;
        }
    }
    else if(op==2){
        if(Top==-1){
            cout<<"Underflow"<<endl;
            break;
        }
        else {
         item=stck[Top];
         Top--;
        }
    }
    else if(op==0||(op!=1&&op!=2)){
        break;
    }}
    cout<<"\nElement of stack";
    if(Top==-1) cout<<"Stack is empty"<<endl;
    else{
        for(int i=Top;i>=0;i--){
            cout<<stck[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
