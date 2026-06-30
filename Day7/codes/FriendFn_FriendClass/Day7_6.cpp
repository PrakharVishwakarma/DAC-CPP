#include<iostream> 
using namespace std; 

class Test 
{
private: 
    int num1; 
protected: 
    int num2; 
public: 
    Test( void ) : num1(10) , num2(20)
    {   }
    friend void print( void );  
};
void print( void )
{
    Test t1; 
    cout<<"num1 : "<<t1.num1<<endl; 
    cout<<"num2 : "<<t1.num2<<endl; 
}
int main()
{
    ::print( ); 
    return 0;
}
  