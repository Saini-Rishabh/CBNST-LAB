#include<stdio.h>
#include<math.h>

int main()
{
    printf("RISHABH-SAINI_I_2016955_BTECH CSE_50\n");
    int a,b,c;
    printf("Please Enter The Coefficient:\n");
    scanf("%d%d%d",&a,&b,&c);
    float D=b*b-4*a*c;
    float rp=-b/(2*a),img;
    if(D==0)
    {
        img=0;
        printf("Two Roots Are:%f and %f",rp ,rp);
    }
    else if(D>0)
    {
        img=sqrt(D)/2*a;
        float ans1=rp+img, ans2=rp-img;
        printf("Two Roots Are:%f and %f",ans1,ans2);
    }
    else
    {
        img=sqrt(-D)/2*a; 
        printf("Two Roots Are:%f+%fi and %f-%fi",rp,img,rp,img);
    }
    return 0;
}