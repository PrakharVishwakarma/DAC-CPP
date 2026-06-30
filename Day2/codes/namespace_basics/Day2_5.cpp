#include<stdio.h> 
namespace na
{
    int num1 = 10; 
    int num2 = 20; 
}
namespace na
{
    int num3 = 30; 
    int num4 = 40; 
}
int main()
{
    printf("num1 : %d\n",na::num1); //10
    printf("num2 : %d\n",na::num2); //20 
    printf("num2 : %d\n",na::num3); //30 
    printf("num4 : %d\n",na::num4); //40 
    return 0;
}
