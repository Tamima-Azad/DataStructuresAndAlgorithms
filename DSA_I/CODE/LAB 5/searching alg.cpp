#include<bits/stdc++.h>
using namespace std;
bubble_sort(int n, int *p)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(*(p+j)>*(p+j+1))
                swap(*(p+j),*(p+j+1));
        }
    }
}
insertion_sort(int n,int *p)
{
    int temp;
    for(int i=1;i<n;i++){
        temp=*(p+i);
        int j=i-1;
        while(j>=0 && temp < *(p+j))
        {
            *(p+j+1)=*(p+j);
            j--;
        }
        *(p+j+1)=temp;
    }

}
selection_sort(int n,int *p)
{
    for(int i=0;i<n-1;i++)
    {
        int mini=i;
        for(int j=i+1; j < n ; j++)
        {
            if(*(p+mini)>*(p+j))mini=j;
        }
        if(mini!=i)swap(*(p+mini),*(p+i));

    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    selection_sort(n,a);
    for(int i=0;i<n;i++)
        cout << a[i] << endl;
}
