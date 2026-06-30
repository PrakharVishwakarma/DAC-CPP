#include<iostream> 
using namespace std; 
class A 
{
    private: 
    int num1; 
    public: 
    A( void )
    {
        this->num1 = 10; 
    }
    A(int num1 )
    {
        this->num1 = num1; 
    }
    void printRecord( void )
    {
        this->showRecord( ); 
    }
    protected: 
    void showRecord( void )
    {
        cout<<"num1 : "<<this->num1<<endl;
    }
}; 
class B : virtual public A 
{
    private: 
    int num2; 
    public: 
    B( void )
    {
        this->num2 = 20; 
    }
    B(int num2)
    {
        this->num2 = num2; 
    }
    B(int num1 , int num2) : A (num1)  
    {
        this->num2 = num2; 
    }
    void printRecord( void )
    {
        A::showRecord( ); //num1 
        this->showRecord( ); //num2 
    }
    protected: 
    void showRecord( void )
    {
        cout<<"num2 : "<<num2<<endl; 
    }
}; 
class C : virtual public A 
{
    private: 
    int num3; 
    public: 
    C( void )
    {
        this->num3 = 30; 
    }
    C(int num3)
    {
        this->num3 = num3; 
    }
    C(int num1 , int num3) : A ( num1 ) 
    {
        this->num3 = num3; 
    }
    void printRecord( void )
    {
        A::showRecord( );  // num1 
        this->showRecord( ); // num3 
    }
    protected: 
    void showRecord( void )
    {
        cout<<"num3 : "<<num3<<endl; 
    }
}; 
class D : public B , public C 
{
    private: 
    int num4; 
    public: 
    D( void )
    {
        this->num4 = 40; 
    }
    D(int num1 , int num2 , int num3 , int num4) : A(num1) , B(num2) , C(num3)
    {
        this->num4 = num4; 
    }
    void printRecord( void )
    {
        A::showRecord( ); 
        B::showRecord( ); 
        C::showRecord( ); 
        this->showRecord( ); 
    }
    protected: 
    void showRecord( void )
    {
        cout<<"num4 : "<<num4<<endl; 
    }
}; 
int main()
{
    D d; 
    //d.printRecord( ); 
    
    D d1(10,20,30,40); 
    d1.printRecord( ); 
    return 0;
}

int main3()
{
    C c1; 
    //c1.printRecord( ); 
    C c2(50,60); 
    c2.printRecord( ); 
    return 0;
}

int main2()
{
    B b; 
    //b.printRecord( ); 
    
    B b1(30,40); 
    b1.printRecord( ); //30 40 
    return 0;
}

int main1()
{
    A a; 
    a.printRecord( ); 

    A a1(10); 
    a1.printRecord( ); 
    return 0;
}
