#include<bits/stdc++.h>
using namespace std;

int main()
{
    int maxstk;
    cin>>maxstk;
    int Stack[maxstk];
    int Top=-1,item;
    while(1){
    cout<<"Enter the operation"<<endl;
    cout<<"1=push"<<'\n'<<"2=pop"<<'\n'<<"0=No operation"<<endl;
    int op;
    cin>>op;
    if(op==1)
    {
        if(Top==maxstk-1) {
            cout<<"Overflow"<<endl;
        break;}
        else {
            cout<<"push item"<<endl;
            cin>>item;

            Top=Top+1;
            Stack[Top]=item;
        }
    }
    else if(op==2)
    {
        if(Top==-1) {
                cout<<"Underflow"<<endl;
        break;}
        else {
            item=Stack[Top];
            Top=Top-1;
        }
    }
    else if(op==0||(op!=1&&op!=2)) break;

    }
    cout<<"Element of Stack"<<endl;
    if(Top==-1) cout<<"Stack is empty"<<endl;
    else{
        for(int i=Top;i>=0;i--){
            cout<<Stack[i]<<" ";
        }
    }



}
