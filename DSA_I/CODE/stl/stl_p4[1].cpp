#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector < int > v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    int j=1;
    while ( j<4)
    {
        int m=0,c=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]>m)
            {
                m=v[i];
                c=i;
            }
        }
        v[c]=0;
        cout << m << " ";
        j++;
        v.pop_back();
    }
}


