#include<stdio.h>
#include<math.h>
#define EPSILON 0.0001
double func(double x)
{
    return x*log10(x)-1.2;
}
double derivation(double x)
{
    return log10(x)+0.43429;
}
void newton_raphson(double x,int iterate)
{
    int count=1;
    double h=func(x)/derivation(x);
    while(count<=iterate)
    {
        h=func(x)/derivation(x);
        x=x-h;
        printf (" \n The root after %d iterations is %lf. \n", count, x);
        count++;
    }
    if(fabs(h)>=EPSILON)
    {
        printf("After %d iterations, root = %lf\n", iterate, x);
    }
}
int main()
{
    double a,b,x0;
    int iterate;
    printf("RISHABH-SAINI_I_2016955_BTECH CSE_50\n");
    printf ( "ENTER THE INTERVAL FOR THE EQUATION (x^3 - x -1): \n");
    scanf (" %lf %lf", &a,&b);
    if(func(a)*func(b)<0)
    {
       // if(abs(func(a)-0)>abs(func(b)-0))
       // {
           // x0=a;
       // }
        x0=b;
    }
    else
	{
		printf("YOU HAVE ENTERED WRONG INTERVAL\n");
		return 0;
	}
	printf (" \n INPUT THE NUMBER OF ITERATIONS YOU WANT TO PERFORM : ");
    scanf (" %d", &iterate);
    printf("\nTHE ENTERED INTERVAL IS :(%.2lf , %.2lf)\n",a,b);
    printf("\n NUMBER OF ITERATIONS : %d\n",iterate);
    printf("\nERROR ALLOWED : %lf\n",EPSILON);
    newton_raphson(x0,iterate);
    return 0;
}