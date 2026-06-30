#include<stdio.h> 
namespace na
{
    int num1 = 10; 
    void print( )
    {
        printf("num1 : %d\n",num1); // same scope 
    }
    struct Point 
    {
        int xPos; 
        int yPos; 
        void print( )
        {
            printf("xPos : %d\n",xPos); 
            printf("yPos : %d\n",yPos); 
        }
    }; 
    namespace nb 
    {
        int num4 = 40; 
    }
}
int main2()
{
    na::print( ); 

    na::Point pt1 = {100,200}; 
    pt1.print( ); 

    printf("num4 : %d",na::nb::num4); 
    return 0;
}

int main1()
{
    using namespace na; 
    print( ); 
    Point pt1 = {100,200}; 
    pt1.print( ); //10 20 
    using namespace na::nb; 
    printf("num4 : %d",num4); 
    return 0;
}
