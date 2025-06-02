#include <bits/stdc++.h>
using namespace std;
int process(char c, int a, int b){
    if(c=='+')return a+b;
    if(c=='-')return a-b;
}

int main(){
    // int n; cout << "The Stack Size : ";
    // cin >> n;
    // int ar[n],exit = 1,top = -1;
    // while(exit){
    // cout << "What do You want : \n1) push\n2) pop\n3) Display\n4) Exit\n";
    // int n; cin >> n;
    // if(n==1){
    //     cout << "Which Data You Want to push into Stack : ";
    //     int x; cin >> x;
    //     top++;
    //     ar[top] = x;
    // }
    // if(n==2){
    //     if(top==-1){
    //         cout << "Underflow";
    //     }
    //     else {
    //         cout << ar[top] << " Pop from the Stack\n";
    //         top--;
    //     }
    // }
    // if(n==3){
    //     int temp = top;
    //     if(top==-1)cout << "The Stack is Empty.\n";
    //     else {
    //         while(1){
    //             cout << ar[temp] << " ";
    //             temp--;
    //             if(temp==-1)break;
    //         }
    //         cout << endl;
    //     }
    // }
    // if(n==4)exit = 0;
    // }
    // string s; cin >> s;
    // int l = s.size();
    // int ar[l],top=-1;
    // for(int i = 0; i < l; i++){
    //     if(s[i] == '['||s[i]=='{'||s[i]=='('){
    //         top++;
    //         ar[top] = s[i];
    //     }
    //     else {
    //         if(s[i] == ')'&&ar[top]=='(')top--;
    //         if(s[i] == '}'&&ar[top]=='{')top--;
    //         if(s[i] == ']'&&ar[top]=='[')top--;
    //     }
    // }
    // if(top>-1)cout << "Not Balanced";
    // else cout << "Balanced";
    string s; cin >> s;
    int l = s.size();
    s[l] = ')';
    int ar[l+1], top = -1;
    for(int i = 0; i < l ; i++){
        if(ar[i]==')')break;
        if(s[i]>=48&&s[i]<58){
            top++;
            ar[top] = s[i];
        }
        else{
            if(ar[top]>=48&&ar[top]<58&&ar[top-1]>=48&&ar[top-1]<58){
                int result = process(s[i],ar[top-1]-48,ar[top]-48);
                top--;
                char cc = result + '0';
                ar[top] = cc;
            }
        }
    }
    cout << ar[top]-48;
return 0;
}
