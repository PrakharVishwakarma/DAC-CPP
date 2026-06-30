#include<stdio.h> 
namespace na
{
    int num1 = 10; 
}
int num1 = 20; 
int main()
{
    int num1 = 100; 
    using namespace na; 
    printf("\nnum1 : %d",num1); 
    printf("\nnum1 : %d",na::num1); 
    return 0;
}
