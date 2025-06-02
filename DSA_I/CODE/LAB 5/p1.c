#include<stdio.h>
#include<malloc.h>
struct link
{
    int data;
    struct link *next;
};
struct link *head;
struct link* display(struct link *h)
{
    struct link *q;
    q=h;
    while(1)
    {
        printf("%d   %d    %d\n",h,h->data,h->next);
        if(h->next==q)break;
        h=h->next;
    }
}
void insert_head_node(struct link *h)
{
    struct link *q, *p;
    p=(struct link*)malloc(sizeof(struct link));
    printf("Enter data  : ");
    scanf("%d",&p->data);
    q=h;
    while(1){
        if(q->next==h){
            q->next=p;
            break;
        }
        q=q->next;
    }
    p->next=h;
    head=p;
    display(head);
}
void insert_last_node(struct link *h)
{
    struct link *q, *p;
    p=(struct link*)malloc(sizeof(struct link));
    printf("Enter data  : ");
    scanf("%d",&p->data);
    q=h;
    while(1)
    {
        if(q->next==h){
            q->next=p;
            p->next=h;
            break;
        }
        q=q->next;
    }
    head = h;
    display(head);
}
void insert_any_node(struct link *h)
{
    struct link *q, *p;
    p=(struct link*)malloc(sizeof(struct link));
    printf("After which data : ");
    int n;
    scanf("%d",&n);
    printf("Enter the data which insert : ");
    scanf("%d",&p->data);
    q=h;
    struct link *temp;
    while(1)
    {
        if(q->data==n){
          p->next=temp->next;
          temp->next=p;
           break;
        }
        q=q->next;
        temp=q;
    }
    head = h;
    display(head);
}
delete_head_node(struct link *h)
{
    struct link *q,*temp;
    q=h;
    temp=h;
    h = h->next;
    while(1){
        if(q->next==temp){
            q->next=h;
            break;
        }
        q=q->next;
    }
    head = h;
    display(head);
}
delete_any_node(struct link *h)
{
    printf("Which data you want to delete : ");
    int target;
    scanf("%d",&target);
    struct link *q,*temp;
    q=h;
    while(1){
        if(q->data==target){
            temp->next=q->next;
            break;
        }
        temp=q;
        q=q->next;
    }
    head=h;
    display(head);
}
delete_last_node(struct link *h)
{
    struct link *q=h,*temp;
    while(1){
        if(q->next==h){
            temp->next=h;
            break;
        }
        temp=q;
        q=q->next;
    }
    head=h;
    display(head);
}
int main()
{
    struct link *p,*q=0,*h=0;
    int n;
    scanf("%d",&n);
    while (n--)
    {
        p=(struct link*)malloc(sizeof(struct link));
        scanf("%d",&p->data);
        if(h==0)h=p;
        else
            q->next=p;
            q=p;
    }
    q->next=h;
    head=h;
    display(head);
    printf("Insert head node\n");
    insert_head_node(head);
    printf("Insert last node\n");
    insert_last_node(head);
    printf("Insert any node\n");
    insert_any_node(head);
    printf("Delete head node\n");
    delete_head_node(head);
    printf("Delete any node\n");
    delete_any_node(head);
    printf("Delete last node\n");
    delete_last_node(head);

}

