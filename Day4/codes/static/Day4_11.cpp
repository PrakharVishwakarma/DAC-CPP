#include<iostream> 
using namespace std; 

class Test 
{
    private: 
    int num1; //instance variable 
    int num2; //instance variable 
    static int num3; //class level variable 
    public: 
    Test( void )
    {
        this->num1 = 0; 
        this->num2 = 0; 
        
    }
    Test( int num1 , int num2)
    {
        this->num1 = num1; 
        this->num2 = num2; 
    }
    void setNum1( int num1)
    {
        this->num1 = num1; 
    }
    void setNum2(int num2)
    {
        this->num2 = num2; 
    }
    static void setNum3(int num3)
    {
        Test :: num3 = num3; 
    }
    void printRecord( void )
    {
        cout<<"Num1 : "<<num1<<endl; 
        cout<<"Num2 : "<<num2<<endl; 
        cout<<"Num3 : "<<Test::num3<<endl;
    }
};
int Test :: num3 = 500; //global defination   
int main()
{
    Test t1(10,20); 
    t1.printRecord( ); //10 20 500
    t1.setNum1(30); 
    t1.setNum2(40); 
    Test::setNum3(1000); // OK ( readable )
    t1.printRecord( ); //30 40 1000  
    
    
    
    return 0;
}
