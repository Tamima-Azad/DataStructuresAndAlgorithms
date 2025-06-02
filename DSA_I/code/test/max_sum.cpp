#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int s=0,ss=0;
	    sort(a,a+n,greater<int>());
	    int m=(n/2);
	    for(int i=0;i<n;i++){
	        if(i<=m) s+=a[i];
	        if(i>m) ss+=a[i];
	    }
	    cout<<s-ss<<endl;
	}

}

