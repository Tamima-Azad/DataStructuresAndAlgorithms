#include<bits/stdc++.h>
using namespace std;
int process(char c, int a, int b)
{
    if(c=='+')return a+b;
    if(c=='-')return a-b;
    if(c=='*')return a*b;
    if(c=='/')return a/b;
    if(c=='^')return pow(a,b);
}

int main()
{
    cout <<"Enter the String : ";
    string s;
    cin >> s;
    int l = s.size();
    cout<<l<<endl;
    int ar[l+1],top=-1;
    s[l]=')';
    for(int i=0; ; i++)
    {
        if(s[i]==')')break;
        if(s[i]>=48&&s[i]<=57)
        {
            top++;
            ar[top]=s[i];
        }
        else
        {
            if(ar[top]>47&&ar[top]<58&&ar[top-1]>47&&ar[top-1]<58)
            {
                int temp = process(s[i],(ar[top-1]-48),(ar[top]-48));
                top=top-1;
                temp=temp+48;
                ar[top]=temp;
            }
        }
    }
    cout << ar[top]-48;


}
