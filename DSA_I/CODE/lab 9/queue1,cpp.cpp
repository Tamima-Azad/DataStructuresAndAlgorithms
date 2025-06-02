#include<bits/stdc++.h>
using namespace std;
static int frnt = -1, rear = -1;
int main()
{
    cout << "Enter The Size Of Queue : ";
    int Max; cin >> Max;
    int ar[Max];
    again:
    cout << "What Do You Want?\na) Enqueue\nb) Dequeue\nc) Display\nd) Exit\ne) Is it Empty?\n";
    char c;
    cin >> c;
    if(c=='d'){
        cout << "Exit From the Operation.";
        return 0;
    }
    if(c=='e'){
        if(frnt==rear)cout << "Empty Queue\n";
        else cout << "NO\n";
        goto again;
    }

    switch(c)
    {
    case 'a':
        cout << "Enter Numbers Which You Want to Insert: ";
        while(1){
            rear++;
            cin >> ar[rear];
            cout << ar[rear] << " Insert to the Queue\n";
            if(frnt==-1)frnt = 0;
            cout << "Again You want to Insert(Y/N)";
            char cc; cin >> cc;
            if(cc=='N'||cc=='n')break;
            if(rear+1==frnt||rear==Max-1){
                cout << "Overflow" << endl;
                break;
            }
        }
        cout << endl;
        goto again;
    case 'b':
        while(1)
        {
            cout << ar[frnt] <<" Delete From the Queue.\n";
            cout << "Again You Want to Delete(Y/N)";
            char ccc; cin >> ccc;
            if(ccc=='N'||ccc=='n'){
                frnt++;
                break;
            }
            if(frnt==rear){
                frnt = -1;
                rear = -1;
                cout << "Underflow" << endl;
                break;
            }
            if(frnt == Max-1)frnt = -1;
            frnt++;

        }
        cout << endl;
        goto again;
    case 'c':
        int temp = frnt;
        if(temp!=rear)
        while(1){
            if(temp-1==rear)break;
            if(temp==Max)temp = 0;
            cout << ar[temp] << " ";
            temp++;
        }
        else cout << "Queue is Empty\n";
        cout << endl;
        goto again;
//    case 'e':
//        if(frnt==rear)cout << "Empty Queue\n";
//        goto again;
        }

}
