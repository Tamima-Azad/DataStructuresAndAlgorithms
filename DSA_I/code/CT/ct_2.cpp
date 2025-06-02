
/*#include<bits/stdc++.h>
using namespace std;
class BankAccount;
class Person
{
    string name;
    int age;
public:
     void printPersonInfo(Person p);
    Person(string nm,int ag){
        name=nm;
        age=ag;
    }
    //friend class BankAccount;
};
void Person ::printPersonInfo(Person p){
    cout<<p.name<<" "<<p.age<<endl;
    }
class BankAccount
{
    int balance;
public:
   // friend class Person;
     BankAccount(int a)
     {
         balance=a;
     }
    void dispayAccountInfo(Person obj){
        obj.printPersonInfo(obj);
        cout<<balance<<endl;
       // cout<<obj.name<<obj.age<<endl;
    }

};

int main()
{   string nm;
    int ag;cin>>nm>>ag;
    Person owner(nm,ag);
    owner.printPersonInfo(owner);

    int b;cin>>b;
    BankAccount obj(b);
    obj.dispayAccountInfo(owner);
}*/

/*#include <bits/stdc++.h>
using namespace std;
class person{
    string name;
    int age;
    public:
    void input(){
        cin >> name >> age;
    }
    void printpersoninfo(person obj){
        cout << "Name : " << obj.name << endl << "age : " << obj.age << endl;
    }
    //friend class BankAccount;

};
class BankAccount {
    int balance;
    public:
    void input2(){
        cin >> balance;
    }
    void display(person obj){
        //person obj;
        obj.printpersoninfo(obj);
        cout << "Balance : " << balance << endl;
    }
};
int main(){

    BankAccount obj;
    person obj2;
    obj2.input();
    obj.input2();
    obj.display(obj2);
return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
class BankAccount;
class Person
{
    string name;
    int age;
public:
     friend void printPersonInfo(Person p);
    Person(){
        cout<<"Name \nage\n";
        cin>>name>>age;
    }
    //friend class BankAccount;
};
void printPersonInfo(Person p){
    cout<<p.name<<" "<<p.age<<endl;
    }
class BankAccount
{
    int balance;
public:
   // friend class Person;
     BankAccount(int a)
     {
         balance=a;
     }
    void dispayAccountInfo(){
        Person obj;
        printPersonInfo(obj);
        cout<<balance<<endl;
       // cout<<obj.name<<obj.age<<endl;
    }

};

int main()
{   string nm;
    //int ag;cin>>nm>>ag;
    //Person owner;
   // printPersonInfo(owner);
    cout<<"Enter banalce"<<endl;
    int b;cin>>b;
    BankAccount obj(b);
    obj.dispayAccountInfo();
}
