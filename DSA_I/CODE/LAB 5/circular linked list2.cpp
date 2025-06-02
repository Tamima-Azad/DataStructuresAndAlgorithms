#include<bits/stdc++.h>
using namespace std;
struct link
{
    int data;
    struct link *next;
};
int main()
{
    struct link *p=0, *q=0, *h=0;
    int n;
    cin >> n;
    while(n--)
    {
        p=(struct link*)malloc(sizeof(struct link));
        cin >> p->data;
        if(h==0)h=p;
        else q->next=p;
        q=p;
    }
    q->next=0;
    p=h;
    qns:
    cout <<"a)Insert front.\n";
    cout <<"b)Insert middle.\n";
    cout <<"c)Insert last.\n";
    cout <<"d)Delete front.\n";
    cout <<"e)Delete middle.\n";
    cout <<"f)Delete last.\n";
    char m;
    scanf(" %c",&m);
    switch(m)
    {
    case 'a':
        p=(struct link*)malloc(sizeof(struct link));
        cout << "Enter data : ";
        cin >> p->data;
        p->next=h;
        h=p;
        q->next=h;
        break;
    case 'b':
        p=(struct link*)malloc(sizeof(struct link));
        cout << "After which data you want to insert?\n";
        int temp1;
        cin >> temp1;
        q=h;
        while(q->data!=temp1)
            q=q->next;
        cout << "Enter data : \n";
        cin >> p->data;
        p->next=q->next;
        q->next=p;
        q->next=h;
        break;
    case 'c':
        p=(struct link*)malloc(sizeof(struct link));
        cout << "Enter data : \n";
       cin >> p->data;
        q->next=p;
        p->next=h;
        break;
    case 'd':
        h=h->next;
        q->next=h;
    case 'e':
        cout << "Which data you want to delete?\n";
        int temp2;
        cin >> temp2;
        q=h;
        while(1)
        {
            if(q->data==temp2){
                p->next=q->next;
            }
            if(q->next==0)break;
            q=q->next;
            p=q;
        }
        q->next=h;
    case 'f':
        q=h;
        p=q->next;
        while(q->next!=0)
        {
            if(p->next==0)
                q->next=0;
            else {
                q=p;
                p=p->next;
            }
        }
        q->next=h;
        break;
    }
    q=h;
    while(1)
    {
        cout << q << "   " << q->data << "    " << q->next << endl;
        if(q->next==h)break;
        q=q->next;
    }
    goto qns;

}


