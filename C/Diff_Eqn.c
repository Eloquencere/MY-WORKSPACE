#include <stdio.h>
#include <math.h>

#define I 5

float a[25],y[25],b[25],x[25];
int choice,D,N;
float sumy,sumx;
int i,k,n; 

void getval()
{
    printf("Enter the number of denominator terms: ");
    scanf("%d",&D);
    for (i=1;i<=D;i++)
    {
        printf("a[%d]=",i);
        scanf("%f",&a[i]);
    }

    printf("Enter the number of numerator terms: ");
    scanf("%d",&N);
    for (i=0;i<N;i++)
    {
        printf("b[%d]=",i);
        scanf("%f",&b[i]);
    }
    printf("\n");

    //! Input Generation
    printf("1. Impulse, 2. u(n)-u(n-10), 3. u(n)\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        x[0]=1;
        for(i=1;i<I;i++)
            x[i]=0;
        break;

        case 2:
        for(i=0;i<10;i++)
            x[i]=1;
        for(i=10;i<I;i++)
            x[i]=0;
        break;
        
        case 3:
        for(i=0;i<I;i++)
            x[i]=1;
        break;
    }   
}

void solve()
{
    for(n=0;n<I;n++)
    {
        sumy=0;
        sumx=0;

        for(k=1; (k<=D) && (k<=n) ;k++)
        {
            sumy+= a[k]*y[n-k];
        }
        for(k=0; (k<N) && (k<=n) ;k++)
        {
            sumx+=b[k]*x[n-k];
        }

        y[n]=-sumy+sumx;
        printf("y[%d]=%0.3f\n",n,y[n]);
    }
}

void main()
{
    getval();
    solve();
}