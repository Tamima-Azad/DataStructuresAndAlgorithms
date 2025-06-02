#include<bits/stdc++.h>
using namespace std;
int main()
{

    cout<<"Enter parenthesis"<<endl;
    string s;cin>>s;
   int Size=s.size();
    int stck[Size],top=-1;
    cout<<Size<<endl;
    for(int i=0;i<Size;i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='{'){
            top++;
            stck[top]=s[i];
           }
        else{
                int c=0;
            if(s[i]==')'&&stck[top]=='(')top--;
            if(s[i]=='}'&&stck[top]=='{')top--;
            if(s[i]==']'&&stck[top]=='['top)--;
        }
    }
}
