#include<bits/stdc++.h>
using namespace std;
struct link
{
    int data;
    struct link *next;
    struct link *prev;
};
int main()
{
    int n;
    cin>>n;
    struct link *p=0,*h=0,*q=0,*r=0;
    while(n!=0){
        p=(struct link*)malloc(sizeof(struct link));
        cin>>p->data;
        if(h==0) h=p;
        else{
            q->next=p;
            q->prev=r;}
        r=q;
        q=p;
        n--;
    }
    h->prev=q;
    q->prev=r;
    q->next=h;
    p=h;
    while(1){
        cout<<p->prev<<"  "<<p<<"  "<<p->data<<"  "<<p->next<<endl;
    if(p->next==h){
        break;}
        p=p->next;
    }
    cout<<"Enter a node to insertfront"<<endl;
    p=(struct link*)malloc(sizeof(struct link));
    cin>>p->data;
    p->next=h;
    q->next=p;
    p->prev=q;
    h=p;
    q=h;
    while(1){
        cout<<p->prev<<"  "<<p<<"  "<<p->data<<"  "<<p->next<<endl;
    if(p->next==h){
        break;}
        p=p->next;
    }
    cout<<"Enter after which node want to insert as middle"<<endl;
    int temp;
    cin>>temp;
    q=h;
    while(q->data!=temp){
        q=q->next;
    }
    p=(struct link*)malloc(sizeof(struct link));
    cout<<"Enter data"<<endl;
    cin>>p->data;
    struct link *t=0;
    p->prev=q;
    p->next=q->next;
    (q->next)->prev=p;
    q->next=p;
    q=h;
    while(1){
        cout<<p->prev<<"  "<<p<<"  "<<p->data<<"  "<<p->next<<endl;
    if(p->next==h){
        break;}
        p=p->next;
    }
    cout<<"Insert a node to insert last"<<endl;
        p=(struct link*)malloc(sizeof(struct link));
    cout<<"Enter data"<<endl;
    cin>>p->data;




}

