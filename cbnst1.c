#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Please Enter A Number\n");
    scanf("%d",&n);
    //int ans=sqrt(n);
    int ans=cbrt(n);
    printf("Answer is:%d",ans);
    return  0;
}