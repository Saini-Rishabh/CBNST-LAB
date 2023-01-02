#include<stdio.h>
#include<math.h>
void add(int a,int b)
{
    a=+b;
    printf("Answer Is :%d",a);    
}
void sub(int a,int b)
{
    a=a-b;
    printf("Answer Is :%d",a);    
}
void mult(int a,int b)
{
    a=a*b;
    printf("Answer Is :%d",a);    
}
void div(int a,int b)
{
    int ans=a/b;
    printf("Answer Is :%f",ans);    
}
int main()
{
    int a,b,c;
    printf("Enter The Two Numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Enter Your Choice\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Divison");
    scanf("%d",&c);
    switch(c)
    {
        case 1:add(a,b);
        break;

        case 2:
        sub(a,b);
        break;

        case 3:
        mult(a,b);
        break;

        case 4:
        div(a,b);
        break;
    }
    return 0;
}