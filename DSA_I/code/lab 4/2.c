#include<stdio.h>
struct link
{
    int data;
    struct link*next;
};

int main()
{
    struct link *p=0,*q=0,*h=0,*m;
    char ch;
    while(ch!='a'){
        p=(struct link*)malloc(sizeof(struct link));
    printf("%\nEnter node data:");
    scanf("%d",&p->data);
    if(h==0) h=p;
    else q->next=p;
    q=p;
    printf("want more node?(y/n)");
        ch=getch();
    }
    q->next=0;
    p=h;
    while(1){
        if(p==0)break;
        printf("\n%d    %d   %d\n",p,p->data,p->next);
        p=p->next;
    }
}
