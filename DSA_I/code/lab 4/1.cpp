/*#include<stdio.h>
struct person
{
    int id[30];
    float gpa[30];
    char name[30];
}p;
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&p.id[i],&p.name,&p.gpa[i]);
            printf("Id= %d Name= %s GPA= %.2f\n",p.id[i],p.name,p.gpa[i]);
    }
    /*for(int i=0;i<n;i++){
        printf("Id= %d Name= %s GPA= %.2f\n",p.id[i],p.name[i],p.gpa[i]);
    }*/
    //return 0;
//}
#include<stdio.h>
#include<malloc.h>
struct link
{
    int data;
    struct link *next;
} ;
struct link *h = 0, *p=0, *q=0,*temp=0;
int main()
{
    int i,x,n;

///create new node

    printf("Enter number of node:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        p=(struct link*)malloc(sizeof(struct link));
        printf("enter data:\n");
        scanf("%d",&p->data);
        //p->data=x;
        if(h==0)
        {
            h=p;
        }
        else
        {
            q->next=p;
        }
        temp=q;
        q=p;
    }
    q->next=0;
    p=h;
    for(;;)
    {
        if(p==0)
            break;

        printf("\n%d       %d          %d\n",p,p->data,p->next);

        p=p->next;
    }

///Insert as a first node///

    int y;
    printf ("\n Enter your data: ");
    scanf ("%d", &y);
    p=(struct link*)malloc(sizeof(struct link));

    p ->data = y;
    p ->next = h;
    h = p;
    printf ("Successfully insertion");
    for(;;)
    {
        if(p==0)
            break;

        printf("\n%d       %d        %d\n",p,p->data,p->next);
        p=p->next;
    }

///Insert as a last node///

    int z;
    printf ("\nEnter your data: ");
    scanf ("%d", &z);
    p = (struct link*) malloc (sizeof(struct link));
    p->data = z;
    q ->next = p;
    p->next = 0;
    printf ("Successfully insertion");

    p=h;
    for(;;)
    {

        if(p==0)
            break;
        printf("\n%d       %d        %d\n",p,p->data,p->next);
        p=p->next;
    }

///insert as anywhere///

    int c, d;
    printf ("\nAfter which data: ");
    scanf ("%d", &c);
    q = h;
    while (1)
    {
        if (q->data ==c)
            break;
        q = q->next;
    }
    printf ("\nEnter your data: ");
    p = (struct link*) malloc (sizeof(struct link));
    scanf ("%d", &p->data);
    p->next = q -> next;
    q ->next = p;
    printf ("\nSuccessfully insertion\n");
    p=h;
    for(;;)
    {

        if(p==0)
            break;
        printf("\n%d       %d        %d\n",p,p->data,p->next);
        p=p->next;
    }

///delete///

    int a, flag;
    printf ("\nEnter which data: \n");
    scanf ("%d", &a);
    p = h;
    while (1)
    {
        if (p->data == a)
        {

            break;
        }
        q = p;
        p = p->next;
        if (p==0)
            break;
    }
    if ( p == h)
        h = h->next;
    else
        q->next = p->next;

    p=h;
    for(;;)
    {

        if(p==0)
            break;
        printf("\n%d       %d        %d\n",p,p->data,p->next);
        p=p->next;
    }
}
