#include<bits/stdc++.h>
using namespace std;
struct link
{
    int data;
    struct link *next;
};
void Displaynode(link *head)
{
    link *temp=head;
    while(1){
        cout<<temp<<" "<<temp->data<<" "<<temp->next<<endl;
        if(temp->next==head) break;
        temp=temp->next;
    }
}

int main()
{
    struct link *p=0,*q=0,*h=0;
    int n;
    cout << "NO of Node : "<<endl;
    cin>>n;
    cout << "Enter data : "<<endl;
    while(n--){
        p=(struct link*)malloc(sizeof(struct link));
        cin>>p->data;
        if(h==0) h=p;
        else q->next=p;
        q=p;
    }
    q->next=h;
    Displaynode(h);
    cout<<"Enter a data to insert front"<<endl;
    p=(struct link*)malloc(sizeof(struct link));
    cin>>p->data;
    p->next=h;
    h=p;
    q->next=h;
    Displaynode(h);
    cout<<"Enter after which insert"<<endl;
    p=(struct link*)malloc(sizeof(struct link));
    int t;
    cin>>t;
    q=h;
    while(q->data!=t)
        q=q->next;
    cout<<"Enter data"<<endl;
    cin>>p->data;
    p->next=q->next;
    q->next=p;
    Displaynode(h);
    cout<<"Enter a data to insertlast"<<endl;

    p=(struct link*)malloc(sizeof(struct link));
    cin>>p->data;
    q=h;
    while(q->next!=h)
        q=q->next;
    q->next=p;
    q=p;
    q->next=h;
    Displaynode(h);
    cout<<"Enter a no to delete front"<<endl;
    int temp;
    cin>>temp;
    h=h->next;
    q->next=h;
    Displaynode(h);
    cout<<"Enter a node to Delete middle"<<endl;
    cin>>temp;
    q=h;
    while(q->data!=temp){
            p=q;
        q=q->next;
    }
    p->next=q->next;
    Displaynode(h);
    cout<<"Enter a no to Deletelast"<<endl;
    cin>>temp;
    q=h;
    while(q->next!=h)
    {
        p=q;
        q=q->next;
    }
    q=p;
    q->next=h;
    Displaynode(h);
    cout<<"Enter a searching data "<<endl;
    cin>>temp;
    q=h;
    int flag=0;
    while(1){
            if(q->data==temp){
                flag=1;
                    break;}
            else if(q->next==h) break;
     q=q->next;
    }
    if(flag==1) cout<<"found"<<endl;
    else cout<<"Not found"<<endl;

    cout<<"Enter old data to update"<<endl;
    cin>>temp;
    q=h;
    flag=0;
     while(1){
            if(q->data==temp){
                flag=1;
                    break;}
            else if(q->next==h) break;
     q=q->next;
    }
    cout<<"Enter a new data to update"<<endl;
    cin>>temp;
    if (flag==1) q->data=temp;
    else cout<<"Can't updata because not found"<<endl;
    Displaynode(h);
    cout<<"Show no of node: "<<endl;
    int c=0;
    q=h;
    while(1){
        c++;
            if(q->next==h) break;
        q=q->next;
    }
    cout<<c<<endl;
}

