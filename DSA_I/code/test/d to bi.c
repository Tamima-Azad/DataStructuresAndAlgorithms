#include<stdio.h>
#include<string.h>
int main()
{
    long long int n,c=0;
    scanf("%lld",&n);
    char v[32];
    while(n)
    {
        int a=n%2;
        v[c]=a+'0';
        c++;
        n=n/2;
    }
    v[c]='\0';
    strrev(v);
    puts(v);
}
