#include<stdio.h>
struct link
{
    int data;
    struct link *next;
};
int main()
{
    struct link *p, *q=0, *h=0;
    int n;
    scanf("%d",&n);
    int x=n;
    while(x--)
    {
        p = (struct link*)malloc(sizeof(struct link));
        scanf("%d",&p->data);
        if(h==0)h=p;
        else q->next=p;
        q=p;
    }
    q->next=0;
    p=h;
    display(h);
    ifn(h);
    display(h);

}
display(struct link *h)
{
    while(1){
        printf("%d   %d   %d\n",h,h->data,h->next);
        if(h->next==0)break;
        h=h->next;
    }
}
ifn(struct link *h)
{
    struct link *p, *q=0;
    p=(struct link*)malloc(sizeof(struct link));
    scanf("Enter data : %d",&p->data);
    p->next=h;
    h=p;
}
