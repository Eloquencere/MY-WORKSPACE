#include<iostream>
using namespace std;
struct node
{
    int info;
    node *link;
};
class LL
{
    int item;
    node *first;
    LL()
    {
        first=NULL;
    }
    public:
        void insert_front()
        {
            node *temp=new node;
            temp->info=item;
            temp->link=first;
            first=temp;
        }
        void delete_front()
        {
            node *next=new node;
            next=first->link;
            first=next;
        }
};
