#include<iostream> 
using namespace std; 

class A 
{
    private: 
    int num1; 
    public: 
    void showRecord( void );
    friend class B;  
}; 
class B 
{
    private: 
    int num2; 
    public: 
    void printRecord(void); 
    friend class A; 
}; 

void A :: showRecord( void )
{
    B obj1; 
    obj1.num2 = 20; 
    cout<<"num2 : "<<obj1.num2<<endl; 
}
void B :: printRecord( void )
{
    A obj1; 
    obj1.num1 = 30; 
    cout<<"num2 : "<<obj1.num1<<endl;
}
int main()
{
    A obj; 
    obj.showRecord( ); 

    B obj1; 
    obj1.printRecord( ); 
    return 0;
}
