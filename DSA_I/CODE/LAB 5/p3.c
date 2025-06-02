#include<stdio.h>
struct link
{
    int data;
    struct link *next;
};
int main()
{
    struct link *p=0, *q=0, *h=0;
    int n;
    scanf("%d",&n);
    while(n--)
    {
        p=(struct link*)malloc(sizeof(struct link));
        scanf("%d",&p->data);
        if(h==0)h=p;
        else q->next=p;
        q=p;
    }
    q->next=0;
    p=h;
    qns:
    printf("a)Insert front.\n");
    printf("b)Insert middle.\n");
    printf("c)Insert last.\n");
    printf("d)Delete front.\n");
    printf("e)Delete middle.\n");
    printf("f)Delete last.\n");
    char m;
    scanf(" %c",&m);
    switch(m)
    {
    case 'a':
        p=(struct link*)malloc(sizeof(struct link));
        printf("Enter data - \n");
        scanf("%d",&p->data);
        p->next=h;
        h=p;
        q->next=h;
        break;
    case 'b':
        p=(struct link*)malloc(sizeof(struct link));
        printf("After which data you want to insert?\n");
        int temp1;
        scanf("%d",&temp1);
        q=h;
        while(q->data!=temp1)
            q=q->next;
        printf("Enter data - \n");
        scanf("%d",&p->data);
        p->next=q->next;
        q->next=p;
        q->next=h;
        break;
    case 'c':
        p=(struct link*)malloc(sizeof(struct link));
        printf("Enter data - \n");
        scanf("%d",&p->data);
        q->next=p;
        p->next=h;
        break;
    case 'd':
        h=h->next;
        q->next=h;
    case 'e':
        printf("Which data you want to delete?\n");
        int temp2;
        scanf("%d",&temp2);
        q=h;
        while(1)
        {
            if(q->data==temp2){
                p->next=q->next;
               p=q;
            }
            if(q->next==0)break;
            q=q->next;
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
        printf("%d %d %d\n",q,q->data,q->next);
        if(q->next==h)break;
        q=q->next;
    }
    goto qns;

}


