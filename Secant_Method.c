#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define f(x) (a3*x*x*x+a2*x*x+a1*x+a0)
float a0,a1,a2,a3;
int main()
{
    float x0,x1,x2,fx0,fx1,E,ER; //
    int i=0;
    printf("Enter coefficient a3, a2, a1, a0\n");
    scanf("%f%f%f%f",&a3,&a2,&a1,&a0);
    printf("Enter two initial guesses and E\n");
    scanf("%f%f%f",&x0,&x1,&E);
    while(1)
    {
        fx0=f(x0);
        fx1=f(x1);
        x2=x1-fx1*(x1-x0)/(fx1-fx0);
        ER=(x2-x1)/x2;
        if(fabs(ER)<E) //fabs is used to get the absolute value
        {
            printf("Root=%f\n",x2);
            break;
        }
        x0=x1;
        x1=x2;
        i=i+1;
        if (i==50)
        break;
    }
}