#include<stdio.h>
#include<math.h>
#define MAX 20
int a0,a1,a2,a3,a4;
long double func(long double x)
{
    return (a4)*x*x*x*x +(a3)*x*x*x+ (a2)*x*x + (a1)*x +(a0);
}
void regulafalsi(long double a,long double b)
{
    if(func(a)*func(b)>=0)
    {
        printf("You Have Not Assumed the Right Interval");
        return ;
    }
    long double c=a;
    for(int i=1;i<MAX;i++)
    {
        c=(a*func(b) - b*func(a))/(func(b)-func(a)); //lmvt is used to find the slope...

        if(func(c)==0)
            break;
        else if(func(c)*func(a)<0)//checking to obtain new interval.. 
            b=c;
        else
            a=c;
        
        printf("%d iteration answer:%Lf\n",i,c);
    }
    printf("Final answer:%Lf",c);
}

int main()
{
    printf("RISHABH-SAINI_I_2016955_BTECH CSE_50\n");
    long double a,b;
    printf("Enter the Coefficient of Each Term:\n");
    scanf("%d%d%d%d%d",&a4,&a3,&a2,&a1,&a0);
    printf("Enter the Interval\n");
    scanf("%Lf%Lf",&a,&b);
    regulafalsi(a,b);
    return 0;
}