#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a,b,c,d=0,f=0;
    cin >> a >> b >> c;
    if(c%a==0||c%b==0)cout << "Yes";
    else
    {
            if(((c-a)%b==0)||((c-b)%a==0))
            {
                cout << "Yes";
            }
            else cout << "No";
        }
    return 0;
}
