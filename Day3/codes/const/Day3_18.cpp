#include<iostream> 
using namespace std; 

class Test 
{
    int num1; 
    int num2; 
    public: 
    Test( void ) : num1(10) , num2(20)
    {   }
    void showRecord( ) const  
    {
        cout<<"num1 : "<<num1<<endl; 
        cout<<"num2 : "<<num2<<endl; 
    }
    void printRecord( ) 
    {
        cout<<"num1 : "<<num1<<endl; 
        cout<<"num2 : "<<num2<<endl; 
    }
    
}; 
int main()
{
    Test t1; //non-constant object 
    t1.showRecord(); // OK 
    t1.printRecord( ); // OK 
    
    const Test t2;
    t2.showRecord( ); 
    // t2.printRecord( );  // Error : cannot call non-constant member function with constant object 
    return 0;
}
