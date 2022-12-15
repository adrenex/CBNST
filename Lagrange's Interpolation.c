#include <stdio.h>
#include <stdlib.h>
int main()
{
     int n;
     printf(“NAME - Harshit Bajeta \nSECTION - A \nROLL NO - 14\n”);
     printf("This is a program to implement Lagrange's Interpolation \n");
     printf("\nEnter the number of terms : ");
     scanf("%d", &n);
     printf("Enter the value of x and y row-wise : \n");
     float x[n], y[n];
     for(int i = 0 ; i < n; i++)
     {
        scanf("%f %f", &x[i], &y[i]);
     }
     float f = 0, ans = 0, level = 1;
     printf("\nEnter the value of y for which f(x) is to be calculated : ");
     scanf("%f", &f);
     for(int i = 0 ; i < n; i++)
     {
        for(int j = 0; j < n; j++)
        {
            if(i != j)
            {
                level *= ((f - x[j])/(x[i] - x[j]));
            }
        }
        ans += (level*y[i]);
        level = 1;
     }
     printf("After applying Lagrange's Interpolation, value of f(%.2f) is : %.4f\n", f, ans);
}
