#include<stdio.h>
struct link
{
    int data;
    struct link *next;
};
int main()
{
    int n;
    scanf("%d",&n);
    int x=n,y=n;
    struct link *p, *q=0, *h=0;
    while (n--)
    {
        p = (struct link*)malloc(sizeof(struct link));
        scanf("%d",&p->data);
        if(h==0)h=p;
        else q->next = p;
        q=p;
    }
    q->next=0;
    p=h;
    int c=0;
    while(x--){
        if(p==h)h=p;
        p=h;
        //printf("%d %d %d\n",p,p->data,p->next);
        p=p->next;
        c++;
    }
    return 0;

}
