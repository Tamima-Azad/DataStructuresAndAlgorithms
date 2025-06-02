#include<stdio.h>
#include<stdlib.h>
struct link
{
    int data;
    struct link *next;
};
int main()
{
    struct link *h=0,*p=0,*q=0;
    int n;
    printf("How many nodes?\n");
    scanf("%d",&n);
     printf("Enter data \n");
    while(n--)
    {
        p=(struct link*)malloc(sizeof(struct link));
        scanf("%d",&p->data);
        if(h==0)
            h=p;
        else q->next=p;
        q=p;
    }
    q->next=NULL;
    //qns:
    printf("\nWhat operation you want to do?\n");
    printf("a)Insert front\n");
    printf("b)Insert middle\n");
    printf("c)Insert last\n");
    printf("d)Delete front\n");
    printf("e)Delete middle\n");
    printf("f)Delete last\n");
    printf("g)No operation\n\n");
    char m;
    m=getch();
    switch(m)
    {
    case 'a':
         p=(struct link*)malloc(sizeof(struct link));
         printf("Enter data :\n");
         scanf("%d",&p->data);
         p->next=h;
         h=p;
         break;
    case 'b':
        p=(struct link*)malloc(sizeof(struct link));
        printf("After which data you want to insert?\n");
        int temp;
        scanf("%d",&temp);
        q=h;
        while(q->data!=temp)
            q=q->next;
        printf("Enter data-\n");
        scanf("%d",&p->data);
        p->next=q->next;
        q->next=p;
        break;

    case 'c':
         p=(struct link*)malloc(sizeof(struct link));
         printf("Enter data -\n");
         scanf("%d",&p->data);
         q->next=p;
         p->next=NULL;
         break;
    case 'd':
         h=h->next;
         break;
    case 'e':
        printf("Which data you want to delete\n");
        scanf("%d",&temp);
        q=h;
        while(q->data!=temp)
        {
            p=q;
            q=q->next;
        }
        p->next=q->next;
        break;
    case 'f':
        q=h;
        p=q->next;
        while(q->next!=0)
        {
            if(p->next==0)
                q->next=0;
            else
            {
                q=p;
                p=p->next;
            }
        }
        break;

    case 'g':
    q=h;
    while(1){
        if(q==0) break;
        printf("%d %d %d \n",q,q->data,q->next);
        q=q->next;
    }
    break;
    }
    //goto qns;


}
