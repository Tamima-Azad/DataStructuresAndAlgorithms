#include<bits/stdc++.h>
using namespace std;
struct link
{
    int data;
    struct link *next;
};
int main()
{
    struct link *p, *q=0, *h=0;
    int n;
    cin >> n;
    int x=n;
    while(x--)
    {
        p = (struct link*)malloc(sizeof(struct link));
        cin >> p->data;
        if(h==0)h=p;
        else q->next=p;
        q=p;
    }
    q->next=0;
    p=h;
    qns:
    printf("a)Insert headnode.\n");
    printf("b)Insert midnode.\n");
    printf("c)Insert lastnode.\n");
    printf("d)Delete headnode.\n");
    printf("e)Delete midnode.\n");
    printf("f)Delete lastnode.\n");
    char m;
    cin >> m;
    switch(m)
    {
    case 'a':
        p = (struct link*)malloc(sizeof(struct link));
        cout << "Enter data : ";
        cin >> p->data;
        p->next=h;
        h=p;
        break;
    case 'b':
        p = (struct link*)malloc(sizeof(struct link));
        cout << "After which data you want to insert?\n";
        int a;
        cin >> a;
        while(1){
            if(q->data==a){

            }
        }
    case 'f':
        void display(h);

    }
    goto qns;
}
void display(struct link *h)
{
    while(1){
        cout << h <<"    " << h->data << "    "<< h->next;
        if(h->next==0)break;
        h=h->next;
    }
}
