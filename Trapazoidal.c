#include <stdio.h>
#include <math.h>
#define f(x) 1 / (1 + pow(x, 2))
int main()
{
    printf("This is a program to implement Trapezoidal Rule \n\n");
    printf("For the function f(x) = 1/(1 + x^2)\n");
    float lower, upper, integration = 0.0, stepSize, k;
    int i, subInterval;
    printf("Enter lower limit of integration : ");
    scanf("%f", &lower);
    printf("Enter upper limit of integration : ");
    scanf("%f", &upper);
    printf("Enter number of sub intervals : ");
    scanf("%d", &subInterval);
    stepSize = (upper - lower) / subInterval;
    integration = f(lower) + f(upper);
    for (i = 1; i <= subInterval - 1; i++)
    {
        k = lower + i * stepSize;
        integration = integration + (2 * f(k));
    }
    integration = integration * (stepSize / 2);
    printf("\nRequired value of integration using Trapezoidal Rule is : %.3f\n", integration);
    return 0;
}
