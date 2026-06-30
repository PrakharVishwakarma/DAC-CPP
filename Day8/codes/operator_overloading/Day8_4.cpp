#include<iostream> 
using namespace std; 
class Point 
{
    private: 
    int xPos; 
    int yPos; 
    public: 
    Point( void ) : xPos(0) , yPos(0)
    {   }
    Point(int xPos , int yPos) : xPos(xPos) , yPos(yPos)
    {   }
    void printRecord( void )
    {
        cout<<"xPos : "<<xPos<<endl; 
        cout<<"yPos : "<<yPos<<endl; 
    }
}; 
int main()
{
    int a = 10; 
    int b = 20; 
    //int c = a + b; // OK 
    Point pt1(10,20); 
    Point pt2(30,40); 
    //Point pt3 = pt1 + pt2;  // NOT OK 
    //In C++ language, we can not use operator with objects of user defined 
    //type(struct/class) directly
    return 0;
}
