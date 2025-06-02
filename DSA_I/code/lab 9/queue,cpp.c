//Queue

#include<bits/stdc++.h>
using namespace std;
list<int>v;
class myqueue
{
    public:
    void enque(int val)
    {
        v.push_back(val);
    }
    void deque()
    {
        v.pop_front();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
    int front()
    {
        return v.front();
    }
};
int main()
{
    int n;
    cout<<"Enter size of queue: ";
    cin>>n;
    myqueue s;
    while(true)
    {
        int p;
        cout<<"1. Enque"<<endl<<"2. Deque"<<endl<<"3. Size"<<endl<<"4. Is empty?"<<endl<<"5. Front"<<endl<<"6. Display"<<endl<<"7. Exit"<<endl<<"Enter your choice: ";
        cin>>p;
        if(p==1)
        {
            int val;
            cout<<"Enter value: ";
            cin>>val;
            if(n==s.size()) cout<<"Queue Over flow."<<endl;
            else s.enque(val);
        }
        else if(p==2)
        {
            if(s.empty()) cout<<"Queue Underflow."<<endl;
            else s.deque();
        }
        else if(p==3) cout<<s.size()<<endl;
        else if(p==4)
        {
            if(s.empty()) cout<<"Queue is empty."<<endl;
            else cout<<"Queue is not empty."<<endl;
        }
        else if(p==5)
        {
            if(s.empty()) cout<<"Queue is empty."<<endl;
            else cout<<s.front()<<endl;
        }
        else if(p==6)
        {
            if(v.empty()) cout<<"Queue is empty."<<endl;
            else
            {
                for(auto i:v) cout<<i<<" ";
                cout<<endl;
            }
        }
        else if(p==7) break;
    }
}
