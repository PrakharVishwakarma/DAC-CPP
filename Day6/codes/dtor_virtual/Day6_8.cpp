#include<iostream> 
using namespace std; 
class Base 
{
    private: 
    int num1; 
    int num2; 
    public:
    Base( void ) : num1(0) , num2(0) 
    {   
        cout<<"Base( void )"<<endl; 
    }
    Base(int num1 , int num2) : num1(num1) , num2(num2)
    {   }
    virtual ~Base()
    {
        cout<<"~Base()"<<endl; 
    }
}; 
class Derived : public Base 
{
    private: 
    int num3; 
    public: 
    Derived(void ): num3(0)
    {   
        cout<<"Derived(void )"<<endl; 
    }
    Derived(int num1 , int num2 , int num3) : Base(num1,num2)
    {
        this->num3 = num3; 
    }
    ~Derived( )
    {
        cout<<"~Derived( )"<<endl; 
    }
}; 
int main()
{
    Base *ptrBase = new Derived( ); 
    delete ptrBase; 
    ptrBase = NULL; 
    return 0;
}

int main2()
{
    Derived *ptrDerived = new Derived( ); 
    delete ptrDerived; 
    ptrDerived = NULL; 
    return 0;
}

int main1()
{
    Base *ptrBase = new Base( ); 
    delete ptrBase; 
    ptrBase = NULL; 
    return 0;
}
