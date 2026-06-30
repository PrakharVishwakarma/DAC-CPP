#include<iostream> 
using namespace std; 
class A 
{
    public: 
    void add( void); 
    int add( int num1 , int num2);
};
class B 
{
    private: 
    int num1; 
    int num2; 
    public: 
    B( void ) : num1(10) , num2(20)
    {   }
    friend void A :: add( ); 
    friend int A :: add( int num1 , int num2);
}; 

void A :: add( )
{
    B obj; 
    int res = obj.num1 + obj.num2; 
    cout<<"res : "<<res;  
}

int A :: add( int num1 , int num2)
{
    B obj; 
    obj.num1 = num1; 
    obj.num2 = num2; 
    int res = obj.num1 + obj.num2; 
    cout<<"res : "<<res;  
    return res;
}


int main()
{
    A obj; 
    obj.add( ); 
    return 0;
}
