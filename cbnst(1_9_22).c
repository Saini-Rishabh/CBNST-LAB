#include<stdio.h>
#include<math.h>
#define e 0.01
    
int a0,a1,a2,a3;
long double func(long double x)
{
    return (a3)*x*x*x+(a2)*x*x+(a1)*x+(a0);
}
void bisection(long double a,long double b)
{
    if(func(a)*func(b)>=0)
    {
        printf("You Have not Assumed the Right Interval\n");
        return ;
    }
    long double c=a;
    while((b-a)>=e)
    {
        c=(a+b)/2;

        if(func(c)==0.0)
            break;
        else if(func(c)*func(a)<0)
            b=c;
        else
            a=c;
    }
    printf("The Value Of the Root is: %Lf ",c);
}

int main()
{
    printf("RISHABH-SAINI_I_2016955_BTECH CSE_50\n");
    long double a,b;
    printf("Enter the Coefficient of Each Term:\n");
    scanf("%d%d%d%d",&a3,&a2,&a1,&a0);
    printf("Please Enter the Interval values:\n");
    scanf("%Lf%Lf",&a,&b);
    bisection(a,b);
    return 0;
}
