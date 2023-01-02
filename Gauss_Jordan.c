#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the No. Of Equations:");
    scanf("%d",&n);
    float eq[n+1][n+2],x[n+1];
    printf("Enter the Augmented Matrix:\n");
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n+1;j++)
    {
        printf("Eq[%d][%d]:",i,j);
        scanf("%f",&eq[i][j]);
    }
    for(int j=1;j<=n;j++)
    for(int i=1;i<=n;i++)
    {
        if(i!=j)
        {
            float c=eq[i][j]/eq[j][j];
            for(int k=1;k<=n+1;k++)
                eq[i][k]=eq[i][k]-c*eq[j][k];
        }
    }
    printf("The Solution Is:\n");
    for(int i=1;i<=n;i++)
    { 
        x[i]=eq[i][n+1]/eq[i][i];
        printf("x%d=%f\n",i,x[i]);
    }
    return 0;
}