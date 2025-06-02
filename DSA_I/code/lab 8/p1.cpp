#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
struct stk
{
    int ar[MAX];
};
static int top = -1;
bool push(int x)
{
    struct stk s;
    top = top + 1;
    if(top==MAX-1){
            cout << "OVERFLOW";
            return false;
    }
    else {
        s.ar[top]=x;
        cout << x << " pushed into Stack.\n";
        return true;
    }

}
bool pop()
{
    struct stk s;
    if(top==-1){
        cout << "UNDERFLOW";
        return false;
    }
    else {
            top = top-1;
            cout  << "Popped top from stack.\n\n";
            return true;
        }
    }


void display()
{
    struct stk s;
    cout << "\nNow the stack elements are : ";
    while(1){

            if(top==-1)break;
        else {
            cout << s.ar[top] << " ";
        }
        top=top-1;

    }
    cout << endl;
}

int main()
{
    struct stk s;
    int n;
    cout << "The Number of Element : ";
    cin >> n;
    for(int i=0;i<n;i++){
        int e;
        cin >> e;
        push(e);
    }
    cout << endl;
    while(1){
    cout << "Do you want to pop from the stack(y/n)";
    char c;
    cin >> c;
    if(c=='y')pop();
    if(c=='n')break;
    cout << "Again ";
    }
    display();
}
