#include<stdio.h>
#include<math.h>

int main()
{
    double n,ans;
    printf("Please Enter the Number:\n");
    scanf("%lf",&n);
    ans=log(n);
    printf("Natural Log Of Number n at Base=e is:%lf",ans);
    return 0;
}