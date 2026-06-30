#include<typeinfo>
#include<iostream> 

using namespace std; 
class Base 
{
    public: 
    virtual ~Base()
    {   }
}; 
class Derived : public Base 
{

}; 
int main1()
{
    Base *ptrBase = NULL; 
    cout<<"Type : "<<typeid(ptrBase).name()<<endl; 
    // cout<<"Type : "<<typeid(*ptrBase).name()<<endl;//std::bad_typeid ( throws exception ) 
    return 0;
}

int main()
{
    Base *ptrBase = new Derived( ); // upcasting 
    cout<<"Type : "<<typeid(ptrBase).name()<<endl; 
    // Prints : P4Base ( P for pointer and 4 is the length of name of class Base )
    cout<<"Type : "<<typeid(*ptrBase).name()<<endl; 
    // Prints : 7Derived ( 7 is the length of name of class Derived )

    cout<<"------------------"<<endl;

    // Downcasting
    Derived *ptrDerived = (Derived*)ptrBase;
    // Using dynamic_cast for downcasting
    Derived *ptrDerived2 = dynamic_cast<Derived*>(ptrBase);
    cout<<"Type : "<<typeid(ptrDerived).name()<<endl;
    // Prints : P7Derived ( P for pointer and 7 is the length of name of class Derived )
    cout<<"Type : "<<typeid(*ptrDerived).name()<<endl;
    // Prints : 7Derived ( 7 is the length of name of class Derived )

    cout<<"------------------"<<endl;

    cout<<"Type : "<<typeid(ptrDerived2).name()<<endl;
    // Prints : P7Derived ( P for pointer and 7 is the length of name of class Derived )
    cout<<"Type : "<<typeid(*ptrDerived2).name()<<endl;
    // Prints : 7Derived ( 7 is the length of name of class Derived )  
    delete ptrBase;
    delete ptrDerived;
    delete ptrDerived2;
    ptrBase = NULL;
    ptrDerived = NULL;
    ptrDerived2 = NULL;
    return 0;
}


