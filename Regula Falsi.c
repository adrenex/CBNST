#include<stdio.h>
#include<math.h>

double f(double x) {
    return x*x*x - x*x*0.165 + 3.993*0.0001;
}

int main()
{
    double x1=0,x0=0;
    int noOfDigits = 4,i=1;
    double t = 0.1 * pow(10,-noOfDigits),c;
    while(f(x1)*f(x0)>0 || x1==x0)
    {
        printf("Enter Valid Range: ");
        scanf("%lf%lf",&x1,&x0);
    }
    while(1)
    {   
        printf("Iteration|     x0\t |    c\t\t |    x1\t |    f(c)\n\n");
        c = (x0 * f(x1) - x1 * f(x0)) / (f(x1) - f(x0));
        printf("    %d\t |  %lf\t |   %lf\t |  %lf\t |  %lf\n",i, x0, c, x1, f(c));
        if(fabs(f(c)) <= t) 
        {
            printf("\nResult is : %lf", c);
            break;
        } 
        else if(f(x0) * f(c) < 0) 
            x1 = c;
        else 
            x0 = c;
        i++;
    }
}

