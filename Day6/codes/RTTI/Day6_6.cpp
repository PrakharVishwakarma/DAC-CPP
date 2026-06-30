#include<typeinfo>
#include<iostream> 

using namespace std; 
class Base 
{

}; 
class Derived : public Base 
{

}; 
int main5()
{
    Derived *ptrDerived = new Derived( ); 
    cout<<"Type : "<<typeid(ptrDerived).name()<<endl; 
    // Prints : P7Derived ( P for pointer and 7 is the length of name of class Derived )
    cout<<"Type : "<<typeid(*ptrDerived).name()<<endl; 
    // Prints : Derived ( 7 is the length of name of class Derived )
    return 0;
}

int main()
{
    Base *ptrBase = new Base( ); 
    cout<<"Type : "<<typeid(ptrBase).name()<<endl; 
    //  Prints : P7Base ( P for pointer and 4 is the length of name of class Base )
    cout<<"Type : "<<typeid(*ptrBase).name()<<endl; 
    // Prints : Base ( 4 is the length of name of class Base )
    return 0;
}

int main4()
{
    Derived derived; 
    cout<<"Type :"<<typeid(derived).name( )<<endl; 
    // Prints : 7Derived ( 7 is the length of name of class Derived )
    return 0;
}

int main3()
{
    Base base; 
    cout<<"Type : "<<typeid(base).name( )<<endl;   
    // Prints : 4Base ( 4 is the length of name of class Base )
    return 0;
}

int main2()
{
    int num; 
    const type_info &typeN = typeid(num);
    cout<<typeN.name( );   
    // Prints : i ( i for int )
    return 0;
}
