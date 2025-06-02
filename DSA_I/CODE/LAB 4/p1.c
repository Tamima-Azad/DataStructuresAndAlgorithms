#include <stdio.h>
struct link
    {
       int data;
       struct link *next;
    }a,*p,*q;
int main() {
    struct link *p,*q;
    q=(struct link*)malloc(sizeof(struct link));
    scanf("%d %d",&p->data,&q->data);
    p->next=q;
    q->next = NULL;
    printf("%d %d %d\n",p,p->data, p->next);
    printf("%d %d %d",q,q->data, q->next);

    return 0;
}
