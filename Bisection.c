#include<stdio.h>
#include<math.h>

double f(double x) {
    return x*x*x -x*x + 2;
}

int main()
{
    double a=0,b=0;
    int noOfDigits = 4,i=1;
    double t = 0.1 * pow(10,-noOfDigits),c;
    while(f(a)*f(b)>0 || a==b)
    {
        printf("Enter Valid Range: ");
        scanf("%lf%lf",&a,&b);
    }
    printf("Iteration|     a\t |    c\t\t |    b\t |    f(c)\n\n");
    while(1)
    {   
        c = (a+b)/2;
        printf("    %d\t |  %lf\t |   %lf\t |  %lf\t |  %lf\n",i, a, c, b, f(c));
        if(fabs(f(c)) <= t) 
        {
            printf("\nResult is :: %lf", c);
            break;
        } 
        else if(f(a) * f(c) < 0) 
            b = c;
        else 
            a = c;
        i++;
    }
}
