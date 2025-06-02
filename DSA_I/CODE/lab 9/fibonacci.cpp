#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{
    int fib,fibA,fibB;
    if(n==0||n==1)
        return n;
    else {
        fibA=fibonacci(n-2);
        fibB=fibonacci(n-1);
        fib = fibA + fibB;
        return fib;
    }
}
int main()
{
    cout << "Enter a Number : ";
    int n; cin >> n;
     cout << fibonacci(n)<<endl;
    for(int i=0;i<n;i++)cout << fibonacci(i) << " ";

}
