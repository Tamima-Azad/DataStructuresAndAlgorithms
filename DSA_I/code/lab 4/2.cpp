#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
node *head  = NULL;
void display(node *h)
{
   while(h != 0)
  {
    cout << h << '\t' << h -> data << '\t' << h -> next << '\n' ;
    h = h-> next;
  }
  cout << '\n';
}
void insertatHead(node *h,int val)
{
    node *newnode =  new node(val);
    newnode -> next = head;
    head = newnode;
}
void insertatTail(node *h,int val)
{
    node *temp = head;
    while(temp->next != NULL)
    {
        temp = temp -> next;
    }
    node *newnode = new node(val);
    temp -> next = newnode;
    newnode -> next = NULL;

}
void insertanywhere(int q,int val)
{
    node *temp = head;
    while(temp->data != q)
    {
        temp = temp->next;

    }
    node *newnode = new node(val);
    node *temp1 =  temp;
    temp1 = temp1->next;
    temp->next = newnode;
    newnode->next = temp1;

}
void  deletenode(int q)
{

  node *temp = head;
  if(head->data == q)
  {
    temp = temp->next;
    head = temp;
  }
  else
{  while(temp -> next -> data != q)
  {
    temp = temp->next;
  }
  node *temp1 =  temp;
  temp1 = temp ->next -> next;
  temp->next = temp1;

}
}
void countnode(node *h)
{
    node *temp = h;
    int sum = 0;
    do   {
         sum++;
        temp = temp->next;

    }
    while(temp->next != NULL);
 if(head ==  NULL)
    cout << "NODE COUNT = " << ' ' << sum << endl;
    else cout << "NODE COUNT = " << ' ' << sum+1 << endl;
}
int32_t main()  {
node *newnode;
while(1)
{
    int x;
    cout << "ENTER ANY NUMBER But if you want to terminate dial 999 :" << ' ' ;
    cin >> x;
    node *last;
    if(x == 999) break;
    newnode = new node(x);

    if(head == 0)
    {
        head = newnode;
    }
    else {
        last -> next = newnode;
    }
    last = newnode;


}

display(head);
while(1)
{
 int x;
 cout << "Enter any number to insert at head but if you want to terminate dial 999 :"<< ' ';
 cin >> x;
 if(x == 999) break;
 insertatHead(head,x);
}
display(head);
while(1)
{
 int x;
 cout << "Enter any number to insert at tail but if you want to terminate dial 999 :"<< ' ';
 cin >> x;
 if(x == 999) break;
 insertatTail(head,x);
}
display(head);
cout << "After which data you want to insert your element ?" << endl;
int z,value;
cin >> z >> value;
node *tempo = head;
while(tempo->next != NULL)
{
    tempo = tempo-> next;
}
if(tempo->data  ==  z)
{
    insertatTail(head,value);
}
else insertanywhere(z,value);
display(head);
cout << "Enter element which you want to delete" << endl;
int y;
cin >> y;
deletenode(y);
display(head);
countnode(head);

   return 0;
}
