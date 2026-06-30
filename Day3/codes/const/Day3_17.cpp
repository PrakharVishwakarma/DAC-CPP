#include<iostream> 
using namespace std; 

class Test 
{
    int num1; 
    int num2; 
    mutable int count; 
    public: 
    Test( void ) : num1(10) , num2(20) , count(0)
    {   }
    void showRecord( ) const  
    {
        //++this->num1; 
        //++this->num2; 
        cout<<"num1 : "<<num1<<endl; 
        cout<<"num2 : "<<num2<<endl; 
    }
    void printRecord( ) const 
    {
        ++this->count; 
        cout<<"num1 : "<<num1<<endl; 
        cout<<"num2 : "<<num2<<endl; 
    }
    int getCount( void ) const 
    {
        return this->count; 
    }
}; 
int main()
{
    Test t1; 
    t1.printRecord( ); 
    t1.printRecord( ); 
    t1.printRecord( ); 

    cout<<t1.getCount()<<endl; 
    return 0;
}
