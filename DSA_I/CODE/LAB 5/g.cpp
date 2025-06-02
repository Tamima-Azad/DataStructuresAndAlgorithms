#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x,c=0,m;
        cin >> x;
        vector<int>v;
        if(x<10)cout << 1 << "\n" << x << endl;
        else
        {
            while(x>0)
            {
                m=x%10;
                v.push_back(m);
                c++;
                if(x<10)break;
                x=x/10;
            }
            int c1=c;
            c=0;
            for(int j=c1-1; j>=0; j--)
                if(v[j]>0)c++;
            cout << c << endl;
            for(int j=c1-1; j>=0; j--)
            {
                if(v[j]>0)
                {
                    cout << v[j]*pow(10,j) << " ";
                }

            }
            cout << endl;
        }
    }
        return 0;
    }
