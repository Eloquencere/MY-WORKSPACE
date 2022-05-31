#include<stdio.h>
#include<math.h>

void main(void)
{
    float x[10],real_X[10],img_X[10],mag_X[10];
    int n,k,N=8;
    float pi=3.14159265;
    
    printf("Enter 8 pt values of x[n]");
    for(n=0;n<N;n++)
    {
        scanf("%f",&x[n]);
    }
    
    for(k=0;k<N;k++)
    {
        real_X[k]=0.0;
        img_X[k]=0.0;
        
        for(n=0;n<N;n++)
        {
            real_X[k]=real_X[k]+x[n]*cos(2*pi*n*k/N);
            img_X[k]=img_X[k]-x[n]*sin(2*pi*n*k/N);
        }

        mag_X[k]=sqrt(pow(real_X[k],2)+pow(real_X[k],2));
        printf("%f+j%f \n",real_X[k],img_X[k]);
        //printf("%f",mag_X[k]);
    }
}