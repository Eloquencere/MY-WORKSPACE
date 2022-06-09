#include<stdio.h>
#include<math.h>

int x[10],h[10],y[10];
int n,k,temp,N;

void getval()
{
    printf("Enter the Value of N: ");
    scanf("%d",&N);
    printf("\n");

    printf("Enter the 1st %d pt sequence\n",N);
    for(n=0 ; n<N ; n++)
    {
        printf("x[%d]=",n);
        scanf("%d",&x[n]);
    }
    x[N]=x[0]; //*needed for reversing
    printf("\n");

    printf("Enter the 2nd %d pt sequence\n",N);
    for(n=0 ; n<N ; n++)
    {
        printf("h[%d]=",n);
        scanf("%d",&h[n]);
    }
    printf("\n");
}

void reversal(int x[], int N)
{
    for(k=0 ; k<=floor(N/2) ; k++)
    {
        temp=x[k];
        x[k]=x[N-k];
        x[N-k]=temp;
    }
}

void shift(int x[], int N)
{
    temp=x[N-1];
    for(k=N-1 ; k>=0 ; k--)
    {
        x[k]=x[k-1];
    }
    x[0]=temp;
}

void conv(int x[], int h[])
{
    for(n=0 ; n<N ; n++)
    {
        y[n]=0;
        
        for(k=0 ; k<N ; k++)
        {
            y[n]+=x[k]*h[k];
        }

        shift(x,N); //* Shift left by 1

        printf("y[%d]=%d\n",n,y[n]);
    }
}

void main()
{
    getval();
    reversal(x,N);
    conv(x,h);
}