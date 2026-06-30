#include<iostream> 
using namespace std; 
//ctor cannot be const 
//we cannot declare global function const , class cannot const 
//local pointer and global pointer can be made const 
//data-member can be const 
//member funtion  can be const 
class Test 
{
    private: 
    int num1; 
    int num2; 
    public: 
    Test( void ) : num1(10) , num2(20)
    {   }
    //className * const this = &t1 
    //const Test * const this = &t1 
    void printRecord( void ) const 
    {
        //++this->num1; //11
        //++this->num2; //21
        cout<<"num1 : "<<num1<<endl; 
        cout<<"num2 : "<<num2<<endl; 
    }
    // className * const  this = &t1; 
    //   Test * const this = &t1 
    void showRecord( void )
    {
        ++this->num1; //12
        ++this->num2; //22 
        cout<<"num1 : "<<num1<<endl; 
        cout<<"num2 : "<<num2<<endl; 
    }
}; 
int main()
{
    Test t1; 
    t1.printRecord( ); // t1.printRecord(&t1); 
    t1.showRecord( ); 
    return 0;
}
