#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,s;
    cin >> n;
    int a[n];

    for(int i=0; i<n; i++)
        cin >> a[i];

    cin >> s;
    int len=sizeof(a)/sizeof(a[0]);
    sort (a,a+len);
    int l=0,u=n-1,f=0,c = 0;
    while (l<=u)
    {
        c++;
        int mid = (l+u)/2;
        if(a[mid]==s)
        {
            cout << "found" <<endl;
            f=1;
            break;

        }
        else if(s<a[mid])
        {
            u=mid-1;
        }
        else if(s>a[mid])
        {
            l=mid+1;
        }
    }
    if(f==0)cout<<"not found"<<endl;

    cout << c;
}
