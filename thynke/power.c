#include<stdio.h>
#include<string.h>
double x=1.414;//defining x as global variable
double power(int p)
{
    
    int i,c=0;
    for(i=1;i<=p;i++)
    {
        if(p%i==0)
        c++;
    }
    if(c==2)
    return p;
    else
    return -1;
    
}
int main()
{
    int i,p;
    double p1,pow=1.0;
    for(p=2;p<=100;p++)
    {
        p1=power(p);
        for(i=1;i<=p1;i++)
        {
            pow=pow*x;
        }
        if(p1==p)
        printf("%.6f\n", pow);
        pow=1.0;
    }
    return 0;
}