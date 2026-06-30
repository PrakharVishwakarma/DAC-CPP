#include<stdio.h>
namespace na
{
    int num1 = 10; // namespace scope 
} 
int num1 = 20;  // program scope 
int main()
{
    printf("num1 : %d\n",::num1); //20
    printf("num1 : %d\n",na::num1); //10 
    return 0;
}
