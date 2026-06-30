#include<stdio.h> 
namespace na
{
    int num1 = 10; 
}
namespace nb
{
    int num1 = 20; 
}
int main()
{
    using namespace na; 
    printf("\nnum1 : %d\n",num1);
    printf("\nnum1 : %d\n",nb::num1);
    
    using namespace nb; 
    //printf("num1 : %d",num1);// NOT OK 
    printf("\nnum1 : %d\n",nb::num1); 
    printf("\nnum1 : %d\n",na::num1);
    return 0;
}
