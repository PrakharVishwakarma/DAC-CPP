#include<iostream> 
using namespace std; 

template<typename X , typename Y> 
class Point 
{
    private: 
    X xPos; 
    Y yPos; 
    public: 
    Point( void ) : xPos( 0 ) , yPos( 0 )
    {   }
    Point(X xPos , Y yPos) : xPos(xPos) , yPos(yPos)
    {   }
    void printRecord( void )
    {
        cout<<"xPos : "<<xPos<<endl; 
        cout<<"yPos : "<<yPos<<endl; 
    }
}; 
int main()
{
    //Point<int,int>pt1(10,20); 
    //Point<int,double>pt1(10,20.1); 
    Point<int,char>pt1(10,'A'); 
    pt1.printRecord( ); 
    return 0;
}
