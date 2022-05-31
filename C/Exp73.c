#include<stdio.h>
#include<math.h>

int x[10],h[10],y[10];
int n,k,temp,N=4;

void getval();
void reversal(int x[], int N);
void shift(int x[],int N);

void main()
{
    getval();
    reversal(x,N);
    printf("\n");

    for(n=0;n<N;n++)
    {
        y[n]=0;
        
        for(k=0;k<N;k++)
        {
            y[n]+=x[k]*h[k];
        }

        shift(x,N);

        printf("y[%d]=%d\n",n,y[n]);
    }
}

void getval()
{
    printf("Enter the 1st %dpt sequence",N);
    for(n=0;n<N;n++)
    {
        scanf("%d",&x[n]);
    }
    x[N]=x[0];

    printf("Enter the 2nd %dpt sequence",N);
    for(n=0;n<N;n++)
    {
        scanf("%d",&h[n]);
    }
}

void reversal(int x[], int N)
{
    for(k=0;k<(N/2);k++)
    {
        temp=x[k];
        x[k]=x[N-k];
        x[N-k]=temp;
    }
}

void shift(int x[],int N)
{
    temp=x[N-1];
    for(k=N-1;k>=0;k--)
    {
        x[k]=x[k-1];
    }
    x[0]=temp;
}