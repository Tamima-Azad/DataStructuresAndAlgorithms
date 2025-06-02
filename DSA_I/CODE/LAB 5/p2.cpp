#include<bits/stdc++.h>
#include<malloc.h>
using namespace std;
struct link
{
    int data;
    struct link *next;
} *h=0,*p=0,*q=0;
void Displaynode(link *head)
{
   while(1){
    if(head==0) break;
    cout<<head<<" "<<head->data<<" "<<head->next<<"\n";
    head=head->next;
   }
   cout<<"\n";
}
void inserthead(link *head,int n)
{
     p=(struct link*)malloc(sizeof(struct link));
    p->data=n;
    q=p;
    q->next=h;
    h=q;
}
void insertlast(link *head,int n)
{
    link *r=h;
    while(r->next!=NULL) {r=r->next;}
    p=(struct link*)malloc(sizeof(struct link));
    p->data=n;
    r->next=p;
    p->next=NULL;
    //hh=r;



}
void insertanywhere(link *head,int n1,int n)
{
    link *t=head;
    while(t==0){
        if(t->data==n1) {
            struct link *s;
            s=(struct link*)malloc(sizeof(struct link));
            s->data=n;
            s->next=t->next;
            t->next=s;

        }
        else t=t->next;
    }
}
void deletenode(link *head,int n)
{
    struct link *v;
    v=(struct link*)malloc(sizeof(struct link));
    v=head;
    if(head->data==n) {
        v=v->next;
        head=v;
    }
}
int main()
{

    cout<<"Enter no of node: ";
    int n;
    cin>>n;
    while(n!=0){
        p=(struct link*)malloc(sizeof(struct link));
        cout<<"Enter node data: ";
        cin>>p->data;
        if(h==0) h=p;
        else q->next=p;
        q=p;
     n--;
    }
    q->next=0;
    Displaynode(h);
    cout<<"Enter a data to insert as head node: ";
    int no;
    cin>>no;
    inserthead(h,no);
    Displaynode(h);
    cout<<"Enter a data to insert as last node: ";
    int n1;
    cin>>n1;
    insertlast(h,n1);
    Displaynode(h);
    cout<<"After which data: ";
    int no1;
    cin>>no1;
    cout<<"Enter a data to insert anywhere: ";
    int n2;
    cin>>n2;
    insertanywhere(h,no1,n2);
    Displaynode(h);
    cout<<"Enter which data want to delete: ";
    int n3;
    cin>>n3;
    deletenode(h,n3);
    Displaynode(h);
}
