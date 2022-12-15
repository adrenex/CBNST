#include<stdio.h>
#include<math.h>
float f(float x,float y);
int main()
{   printf("Harshit Bajeta, A-14\n");
    float x0,y0,m1,m2,m3,m4,m,y,x,h,xn;
    printf("Enter x0,y0,xn,h:");
    scanf("%f %f %f %f",&x0,&y0,&xn,&h);
    x=x0;
    y=y0;
    printf("\n\nX\t\tY\n");
    while(x<xn)
    {
        m1=f(x,y);
        m2=f((x+h/2.0),(y+m1*h/2.0));
        m3=f((x+h/2.0),(y+m2*h/2.0));
        m4=f((x+h),(y+m3*h));
        m=((m1+2*m2+2*m3+m4)/6);
        y=y+m*h;
        x=x+h;
        printf("%f\t%f\n",x,y);
    }
}
float f(float x,float y){
    float m;
    m=(x-y)/(x+y);
    return m;
}
