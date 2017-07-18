#include <stdio.h>
#include <math.h>

int main()
{
    printf("Problem 1.2\n\n");

    double dt=0.01;
    int size=4*M_PI/dt;
    double x[size];
    x[0]=1.0;

    double v[size];
    v[0]=0.0;
    double t=0.0;
    int count=1;

    printf("x(%2.2f):  %f\tv(%2.2f):  %f\tExact x(%2.2f):  %f\tExact v(%2.2f):  %f\n\n",
               t,x[count],t,v[count],t,cos(t),t,-sin(t));

    for(t=dt;t<(4*M_PI);t+=dt)
    {
        x[count]=(x[count-1]+dt*v[count-1]);
        v[count]=(v[count-1]-dt*x[count]);

        printf("x(%2.2f):  %f\tv(%2.2f):  %f\tExact x(%2.2f):  %f\tExact v(%2.2f):  %f\n\n",
               t,x[count],t,v[count],t,cos(t),t,-sin(t));
        count++;
    }

    return 0;
}
