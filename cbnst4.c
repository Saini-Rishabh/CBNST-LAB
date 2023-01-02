#include<stdio.h>
#include<math.h>

int main()
{
    double n,ans;
    printf("Enter The Number:\n");
    scanf("%f",&n);
    ans=exp(n);
    printf("Exponential of Number n at base e=%f",ans);
    return 0;
}