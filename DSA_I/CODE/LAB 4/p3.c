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
    int x=n;
    struct link *p, *q=0, *h=0;
    while (n--)
    {
        p = (struct link*)malloc(sizeof(struct link));
        scanf("%d",&p->data);
        if(h==0)h=p;
        else q->next = p;
        q=p;
    }
    int y;
    scanf("%d",&y);
    while(x--){
            if(q->data==y){
               p = (struct link*)malloc(sizeof(struct link));
               scanf("%d",&p->data);
               p->next=q->next;
               q->next=p;
               break;
               }
               else q=q->next;
    }
    q->next=0;
    p=h;
    while(p->next!=0){
        printf("%d    %d    %d\n",p,p->data,p->next);
        p=p->next;
    }
    return 0;

}
