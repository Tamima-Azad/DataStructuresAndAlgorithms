#include<bits/stdc++.h>
using namespace std;
struct link
{
    int data;
    struct link *next,*prev;
}*p=0,*q=0,*h=0,*r=0;
typedef struct link node;
node *head,*headd;
void Displaynode(node *h)
{
    p=h;
    while(1)
    {
        cout<<p<<" "<<p->data<<" "<<p->next<<endl;
        if(p->next==0) break;
        else if(p->next==h) break;
        p=p->next;
    }
}
void Updatenode(node *h)
{
    cout<<"Enter which data want to update: ";
    int d;
    cin>>d;
    q=h;
    while(q->data!=d) q=q->next;
    cout<<"Enter new data: "<<endl;
    cin>>d;
    q->data=d;
    head=h;
    Displaynode(head);
}
void Searchnode(node *h)
{
    cout<<"Enter searching data: ";
    int temp;
    cin>>temp;
    q=h;
    int flag=0;
    while(q->next!=0){
        if(q->data==temp){
                flag=1;
        break;}
        q=q->next;
    }
    if(flag==1) {
         cout<<temp<<" is found "<<endl;
    }
        else {
            cout<<temp<<" is not found "<<endl;
        }
}
void Inserthead(node *h)
{
    cout<<"Enter data to insert head"<<endl;
    p=new node;
    cin>>p->data;
    p->next=h;
    h=p;
    head=h;
    Displaynode(head);
}
void Insertmiddle(node *h)
{
    cout<<"Enter data to insert after which: ";
    int temp;
    cin>>temp;
    q=h;
    while(q->data!=temp) q=q->next;
    cout<<"Enter new data : ";
    p=new node;
    cin>>p->data;
    p->next=q->next;
    q->next=p;
    head=h;
    Displaynode(head);
}
void Insertlast(node *h)
{
    q=h;
    while(q->next!=0) q=q->next;
    cout<<"Enter new node to insert last : ";
    p=new node;
    cin>>p->data;
    q->next=p;
    p->next=0;
    head=h;
    Displaynode(head);
}
void Circularlinked(node *h)
{
   q=h;
   while(q->next!=0) q=q->next;
   q->next=h;
   head=h;
   cout<<'\n'<<"circular linked list"<<'\n'<<endl;
   Displaynode(head);
}
void Circularupdate(node *h)
{
    cout<<"Enter old data: ";
    int n;
    cin>>n;
    q=h;
    while(q->data!=n) q=q->next;
    cout<<"Enter new data: ";
    cin>>n;
    q->data=n;
    head=h;
    Displaynode(head);
}
void Circularseach(node *h)
{
    cout<<"Enter Wanted data: ";
    int no;
    cin>>no;
    q=h;
    while(q->next!=h){
        if(q->data==no){
            cout<<no<<" is found"<<endl;
            return;
        }
    }
    cout<<no<<" is not found"<<endl;
    return;
}
void Displaydouble(node *h)
{
    q=h;
   while(1){
    cout<<p->prev<<" "<<p<<" "<<p->data<<" "<<p->next<<endl;
    if(q->next==0) break;
    else if(q->next==h) break;
    q=q->next;
   }
}
void Doublecircular(node *h)
{
    q=h;
    r=0;
    while(q->next!=0){
        q->prev=r;
    r=q;
            q=q->next;
    }
    q->prev=r;
    q->next=headd;
    headd->prev=q;
    headd=h;
    cout<<'\n'<<endl;
    Displaydouble(headd);
}
void Doublelinked()
{
    node *hh=0;
    cout<<"Enter no of node:"<<endl;
    int n;
    cin>>n;
    cout<<"Enter node data:"<<endl;
    while(n--){
        p=new node;
        cin>>p->data;
        if(hh==0) hh=p;
        else {
            q->next=p;
            q->prev=r;
        }
        r=q;
        q=p;
    }
    q->prev=r;
    q->next=0;
    headd=hh;
    Displaydouble(headd);

}
int main()
{
    cout<<"No of node:";
    int n;
    //cin>>n;
    cout<<"Enter data: "<<endl;
    while(n--){
       p=new node;
       //cin>>p->data;
       if(h==0) h=p;
       else q->next=p;
       q=p;
    }
    q->next=NULL;
    head=h;
    cout<<"single linked list"<<'\n'<<endl;
    //Displaynode(head);
    //Updatenode(head);
   // Searchnode(head);
    //Inserthead(head);
    //Insertmiddle(head);
    //Insertlast(head);
    //Circularlinked(head);
    //Circularupdate(head);
    //Circularseach(head);
    Doublelinked();
}
