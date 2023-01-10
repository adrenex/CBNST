#include <math.h>
#include <stdio.h>

double f(double x) {
    return 6 * x * x + 11 * x - 35;
}

double d(double x) {
    return 12 * x + 11;
}

int main() 
{
    double a;
    // calculating tolerance2
    int noDigits = 4,count=1;
    double b = 0.5 * pow(10.0, -noDigits);

    // input
    printf("Enter Initial Approximation: ");
    scanf("%lf", &a);
    while(1)
    {
        float p=a-(f(a)/d(a));
        if(fabs(f(p))<b)
        {
            printf("Root of the Equation: %f\n",p);
            printf("Total Number of Iterations: %d\n",count);
            printf("Tolerance: %f\n",b);
            break;
        }
        else
        {
            a=p;
            printf("Iteration %d: %f\n",count,p);
            count++;
        }
    }

    return 0;
}
