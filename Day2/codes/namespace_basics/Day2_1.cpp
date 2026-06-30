#include<stdio.h> 
int num1 = 10; // program scope 
static int num2 = 20; // file scope 
namespace na
{
    int num3 = 30;  // namespace scope 
    class Test 
    {
        int num4; // class scope 
    }; 
}
int main()
{
    int num5 = 40; //function scope 
    void print(int num6); // function prototype scope 
    {
        int num7 = 50; //block scope 
    }
    return 0;
}
