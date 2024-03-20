// udf, [sum, sub, mul, div]

#include <stdio.h>
int sum();
int sub();
int mul();
float div();
int main()
{
    sum();
    sub();
    mul();
    div();
    return 0;
}
int sum()
{
    int a,b;
    
    printf("Enter The Value Of A :");
    scanf("%d",&a);
    
    printf("Enter The Value Of B :");
    scanf("%d",&b);  
    printf("Sum Of Two Value = %d\n",a+b);
    
}
int sub()
{
    int a,b;    
    printf("Enter The Value Of A :");
    scanf("%d",&a);  
    printf("Enter The Value Of B :");
    scanf("%d",&b);
    printf("Subtraction Of Two Value = %d\n",a-b);
    
}
int mul()
{
    int a,b;
    printf("Enter The Value Of A :");
    scanf("%d",&a);   
    printf("Enter The Value Of B :");
    scanf("%d",&b);  
    printf("Multiplication Of Two Value = %d\n",a*b);
    
}

float div()
{   
    int a,b;  
    printf("Enter The Value Of A :");
    scanf("%f",&a);
    printf("Enter The Value Of B :");
    scanf("%f",&b);
    printf("Division Of Two Value = %f",a/b);
}