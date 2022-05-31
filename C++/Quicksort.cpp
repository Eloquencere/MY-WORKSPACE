#include<iostream>
using namespace std;

class select; //? What do I do?

int ar[5]={1,11,15,0,10},low=0,high=4,count=0,i,small,j;

int main()
{   
    select s;
    s.sort();
    s.display();
    return 0;

}

class select
{
public:
    void sort()
    {
        small=ar[low];
        while(count<=high)
        {
            for(i=count;i<=high;i++)
            {
                if(ar[i]<=small)
                {
                    small=ar[i];
                    j=i;
                }
            }
            int temp;
            temp=ar[j];
            ar[j]=ar[count];
            ar[count]=temp;
            count++;
        }
    }
    
    void display()
    {
        int j=low;
        for(j=0;j<=high;j++)
        {
            cout<<ar[j]<<endl;
        }
    }
};