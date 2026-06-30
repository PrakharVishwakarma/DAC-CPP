#include<iostream> 
using namespace std; 

class Test 
{
    private: 
    int num1; //instance variable 
    int num2; //instance variable 
    int num3; //instance variable 
    public: 
    Test( void )
    {
        this->num1 = 0; 
        this->num2 = 0; 
        num3 = 500; 
    }
    Test( int num1 , int num2)
    {
        this->num1 = num1; 
        this->num2 = num2; 
        num3 = 500; 
    }
    void printRecord( void )
    {
        cout<<"Num1 : "<<num1<<endl; 
        cout<<"Num2 : "<<num2<<endl; 
        cout<<"Num3 : "<<num3<<endl;
    }
};  
int main()
{
    Test t1(10,20) , t2(30,40) , t3(50,60); 
    t1.printRecord( ); // 10 20 500 
    t1.printRecord( ); // 30 40 500 
    t1.printRecord( ); // 50 60 500 
    return 0;
}
