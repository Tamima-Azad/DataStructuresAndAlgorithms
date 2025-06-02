#include<bits/stdc++.h>
using namespace std;
struct link
{
    int data;
    struct link *next;
};
int main()
{
    int n;
    cin>>n;
    struct link *p=0,*h=0,*q=0;
    while(n!=0){
        p=(struct link*)malloc(sizeof(struct link));
        cin>>p->data;
        if(h==0) h=p;
        else q->next=p;
        q=p;
        n--;
    }
    q->next=h;
    p=h;
    while(1){
        cout<<p<<" "<<p->data<<" "<<p->next<<endl;
    if(p->next==h){
        break;}
        p=p->next;
    }
}
