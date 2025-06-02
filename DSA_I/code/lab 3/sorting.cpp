#include <bits/stdc++.h>
using namespace std;
int main(){

    int n; cin >> n; vector <int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    } int j, temp,mini;
    //Insertion Sort
    for(int i = 1; i < n; i++){
        j = i - 1;
        temp = v[i];
        while(j >= 0 && temp < v[j]){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = temp;
    }
    for(auto i: v)cout << i << " ";
    //Selection Sort
    for(int i = 0; i < n - 1; i++){
        mini = i;
        for(int j = i+1; j < n; j++){
            if(v[mini]>v[j])mini = j;
        }
        if(i!=mini)swap(v[mini],v[i]);
    }
    for(auto i : v)cout << i << " ";

return 0;
}
