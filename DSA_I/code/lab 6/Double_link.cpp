//Double Linked list
#include<bits/stdc++.h>
using namespace std;
struct Double_link
{
    int data;
    struct Double_link *next,*prev;
}*p=0,*h=0,*q=0,*r=0;
typedef struct Double_link node;
node *head;
void Displaynode(node *h)
{
    p=h;
    while(1)
    {
       cout<<h->prev<<" "<<h<<" "<<h->data<<" "<<h->next<<endl;
       if(h->next==p) break;
       h=h->next;
    }
}
void Insert_head(node *h)
{
    cout<<"Enter data:"<<endl;
    p=new node;
    cin>>p->data;
    p->next=h;
    h->prev=p;
    p->prev=q;
    q->next=p;
    head=p;
    Displaynode(head);
}
void Insert_middle(node *h)
{
    cout<<"Enter after which data want to insert"<<endl;
    int temp;
    cin>>temp;
    q=h;
    while(q->data!=temp)
        q=q->next;
    cout<<"Enter data to insert"<<endl;
    p=new node;
    cin>>p->data;
    p->next=q->next;
    q->next->prev=p;
    p->prev=q;
    q->next=p;
    Displaynode(head);
}
void Insert_last(node *h)
{
    cout<<"Enter data:"<<endl;
    p=new node;
    cin>>p->data;
    q=h;
    while(q->next!=h)
        q=q->next;
    q->next=p;
    p->prev=q;
    p->next=h;
    h->prev=p;
    head=h;
    Displaynode(head);
}
void Delete_head(node *h)
{

    h=h->next;
    q=head;
    while(q->next!=head) q=q->next;
    q->next=h;
    h->prev=q;
    head=h;
    Displaynode(head);
}
void Delete_middle(node *h)
{
    cout<<"Enter a nodedata to delete"<<endl;
    int temp;
    cin>>temp;
    q=h;
    while(q->data!=temp) q=q->next;
    q->next->prev=q->prev;
    q->prev->next=q->next;
    Displaynode(head);
}
void Delete_last(node *h)
{
    q=h;
    while(q->next!=h) q=q->next;
    q->prev->next=h;
    h->prev=q->prev;
    head=h;
    Displaynode(head);
}
int main()
{
    int n;
    cin>>n;
    while(n--){
        p=new node;
        cin>>p->data;
        if(h==0) h=p;
        else{
            q->next=p;
            q->prev=r;}
        r=q;
        q=p;
    }
    h->prev=q;
    q->prev=r;
    q->next=h;
    head=h;
    Displaynode(head);
    cout<<"Insert a node in head"<<endl;
    Insert_head(head);
    cout<<"Insert a node in middle"<<endl;
    Insert_middle(head);
    cout<<"Insert a node in last"<<endl;
    Insert_last(head);
    cout<<"Delete head node"<<endl;
    Delete_head(head);
    cout<<"Delete a node from middle"<<endl;
    Delete_middle(head);
    cout<<"Delete last node"<<endl;
    Delete_last(head);
    return 0;
}
