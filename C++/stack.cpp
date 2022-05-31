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
        void display()  //! Infinite loop!
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
    int choice;
    stack s;
    for(int i=0;i<=1;i++)
    {
        cout<<"1.push,2.pop,3.display,4.exit"<<endl;
        cin>>choice;
        if(choice==1)
        {
            s.push();
        }
        else if(choice==2)
        {
            s.pop();
        }
        else if(choice==3)
        {
            s.display();
        }
        else
        {
            exit(0);
        }
    }
    return 0;
}  