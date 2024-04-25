#include<stdio.h>
#include<math.h>
//tim nghiem cua pt
int main()
{
    double x,y;
    y = 10;
    do
    {
        x = y;
        y = x - ((x*x*x+x*cos(x)+3*x+1)/(3*x*x-x*sin(x)+cos(x)+3));
    } while (fabs(x-y)>0.00001);
    printf("%.4lf",y);
}