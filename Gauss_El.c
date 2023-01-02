#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Please Enter the Order of Matrix or No.of Equations \n");
    scanf("%d",&n);

    float eq[n+1][n+2],x[n+1],sum=0.0;
    printf("Please Enter the Augmented Matrix:\n");
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n+1;j++)
    {
        printf("Eq[%d][%d]:",i,j);
        scanf("%f",&eq[i][j]);
    }
    for(int j=1;j<=n;j++)
    for(int i=1;i<=n;i++)
    {
        if(i>j)
        {
            float c=eq[i][j]/eq[j][j];
            for(int k=1;k<=n+1;k++)
                eq[i][k]=eq[i][k]-c*(eq[j][k]);
        }
    }
    x[n]=eq[n][n+1]/eq[n][n];
    for(int i=n-1;i>=1;i--)
    {
        sum=0;
        for(int j=i+1;j<=n;j++)
            sum=sum+(eq[i][j]*x[j]);
        x[i]=(eq[i][n+1]-sum)/eq[i][i];
    }
    for(int i=1;i<=n;i++)
    printf("\nx%d=%f\t",i,x[i]);
    return 0;
}
