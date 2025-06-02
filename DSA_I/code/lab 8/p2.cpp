#include<bits/stdc++.h>
using namespace std;

static int top = -1;
int main()
{
    string s;
    cin >> s;
    int ar[s.size()],f = 1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            top++;
            ar[top]=s[i];
        }
        else{
            int c = 0;
            if(s[i]==')'&&ar[top]=='('){top--;c++;}
            if(s[i]=='}'&&ar[top]=='{'){top--;c++;}
            if(s[i]==']'&&ar[top]=='['){top--;c++;}
            if(c==0){
                cout << "Not balanced.";
                f = 0;
                break;
            }
        }
    }
    //if(f==1 && (ar[top]=='('||ar[top]==')'||ar[top]=='{'||ar[top]=='}'||ar[top]=='['||ar[top]==']'))cout << "NO";
    if(f==1) cout << "Balanced";
}
