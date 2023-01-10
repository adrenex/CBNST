/*
 1. OBJECTIVE: To implement Euler's Modified Method.
 2. ALGORITHM:
	Step 1:For a function f(x,y), get xn,x0,y0 and h
	Step 2=Find n=(xn-x0)/h
	Step 3:Find initial yi by using Euler's formula as:
	       y(i)(0)=y(0)+h*f(x(0),y(0))
	Step 4:Find yi(j) untill absolute error is less than
	       10^-4 using formula:
	       y(i)(j)=y(i-1) + (h/2)*[f(x(i-1),y(i-1))+f(xi,yi(j-1))
	Step 5:Repeat Step 3 uptill the value of xn
 3.PROGRAM:
*/
 #include<stdio.h>
 #include<process.h>
 #include<math.h>
 #include<conio.h>
 float f(float x, float y)
 {
  return (x-y)/(x+y);
 }
 int main()
 {
  int i,n,itr;
  float x[5],y[50],yc[50],h,yp,p,xn;
  printf("\n Enter the values of x0,y0,h and xn: ");
  scanf("%f%f%f%f",&x[1],&y[1],&h,&xn);
  yp=y[1]+h*f(x[1],y[1]);
  itr=(xn-x[1])/h;
  printf("\n\n X=%f Y=%f\n",x[1],y[1]);
  for(i=1;i<=itr;i++)
  {
   x[i+1]=x[i]+h;
   for(n=1;n<=50;n++)
   {
    yc[n+1]=y[i]+(h/2.0)*(f(x[i],y[i])+f(x[i+1],yp));
    printf("\n N=%d Y=%f",n,yc[n+1]);
    p=yc[n+1]-yp;
    if(fabs(p)<0.0001)
    {
     y[i+1]=yc[n+1];
     printf("\n\n X=%f Y=%f\n",x[i+1],yp);
     break;
    }
    else
     yp=yc[n+1];
   }
  }
  getch();
  return 0;
 }
