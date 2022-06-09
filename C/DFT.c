#include<stdio.h>
#include<math.h>

float real_x[10],img_x[10],real_X[10],img_X[10],mag_X[10];
int n,k,N;
float pi=3.14159;

void getval()
    {
        printf("Enter the Value of N: ");
        scanf("%d",&N);

        printf("Enter %d pt values of x[n]\n",N);
        for(n=0;n<N;n++)
        {
            printf("x[%d]: ",n);
            scanf("%f",&real_x[n]);
            printf("j");
            scanf("%f",&img_x[n]);
            printf("\n");
        }
    }

void DFT(float img_x[],float real_x[],int N)
{
    for(k=0;k<N;k++)
    {
        real_X[k]=0;
        img_X[k]=0;
        
        for(n=0;n<N;n++)
        {
            real_X[k]+=real_x[n]*cos(2*pi*n*k/N)+img_x[n]*sin(2*pi*n*k/N);
            img_X[k]+=img_x[n]*cos(2*pi*n*k/N)-real_x[n]*sin(2*pi*n*k/N);
        }
        if(img_X[k]<0)
            printf("X[%d]=%0.3f-j%0.3f\n",k,real_X[k],abs(img_X[k]));
        else
            printf("X[%d]=%0.3f+j%0.3f\n",k,real_X[k],img_X[k]);
        
        //mag_X[k]=sqrt(pow(real_X[k],2)+pow(real_X[k],2));
        //printf("%f",mag_X[k]);
    }
}

void main()
{
    getval();
    DFT(real_x,img_x,N);
}
