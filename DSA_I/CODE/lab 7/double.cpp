#include<bits/stdc++.h>
using namespace std;
struct Double_link
{
    int data;
    struct Double_link *prev,*next;
};
typedef struct Double_link node;
void Displaydouble(node *head){
    node *t=head;
    while(1){
            cout<<t->prev<<" "<<t<<" "<<t->data<<" "<<t->next<<endl;
    if(t->next==head) break;
    t=t->next;
    }
}
int main()
{
    node *p=0,*h=0,*q=0,*r=0;
    cout<<"NO of node: "<<endl;
    int n;
    cin>>n;
    cout<<"Enter Node data: ";
    while(n--){
        p=(node*)malloc(sizeof(node));
        cin>>p->data;
        if(h==0) h=p;
        else {
            q->prev=r;
            q->next=p;
        }
        r=q;
        q=p;
    }
    q->prev=r;
    q->next=h;
    h->prev=q;
    Displaydouble(h);

}

