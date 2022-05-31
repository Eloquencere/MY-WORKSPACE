#include<iostream>
using namespace std;
#define size 5
class stack
{
    int s[size],top=-1,item;
    public:
        void push()
        {
            if(top==size)
            {
                cout<<"stack full"<<endl;
            }
            else
            {
                cin>>item;
                s[++top]=item;
            }
        }
        void pop()
        {
            if(top==-1)
            {
                cout<<"Stack empty"<<endl;
            }
            else
            {
                s[--top];
            }
        }
        void display()
        {
            int trav;
            trav=top;
            while(trav!=-1)
            {
                cout<<s[trav];
            }
        }
};
int main()
{
    cout<<"1.push,2.pop,3.display"<<endl;
    int choice;
    cin>>choice;
    return 0;
}