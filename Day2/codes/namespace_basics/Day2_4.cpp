#include<stdio.h> 
namespace na
{
    int num1 = 10; 
    int num2 = 20; 
}
namespace nb
{
    int num2 = 30; 
    int num4 = 40; 
}
int main()
{
    printf("num1 : %d\n",na::num1); //10
    printf("num2 : %d\n",na::num2); //20 
    printf("num2 : %d\n",nb::num2); //30 
    printf("num4 : %d\n",nb::num4); //40 
    return 0;
}
