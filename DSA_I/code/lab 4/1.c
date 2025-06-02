#include<stdio.h>
//#include<malloc.h>
struct person
{
    int id[30];
    float gpa[30];
    char name[30];

}p;
struct link
{
    int data;
    struct link*next;
}*q,*qq;
int main()
{
    int n;
    //scanf("%d",&n);
     q=(struct person*)malloc(sizeof(struct person));
     //qq=(struct person*)malloc(sizeof(struct person));
   // printf("%d %d",q,qq);
   scanf("%d %d",&q->data,&qq->data);
   q->next=qq;
   qq->next=NULL;
   printf("%d %d %d\n",q,q->data,q->next);
   printf("%d %d %d\n",qq,qq->data,qq->next);
    /*for(int i=0;i<n;i++){
        scanf("%d %s %f",&p.id[i],&p.name,&p.gpa[i]);
        printf("Id= %d Name= %s GPA= %.2f\n",p.id[i],p.name,p.gpa[i]);
    }*/
    /*for(int i=0;i<n;i++){
        printf("Id= %d Name= %s GPA= %.2f\n",p.id[i],p.name[i],p.gpa[i]);
    }*/
    return 0;
}

