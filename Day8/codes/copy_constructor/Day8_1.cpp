#include<iostream>
using namespace std; 
class Complex 
{
    private: 
    int real; 
    int imag; 
    public: 
    Complex( void ): real(0) , imag(0)
    {   
        cout<<"Complex( void )"<<endl; 
    }
    //this = &c2 
    //other = c1 
    Complex(const Complex &other)
    {
        cout<<"Complex(const Complex &other)"<<endl; 
        this->real = other.real; 
        this->imag = other.imag; 
    }
    Complex(int real , int imag) : real(real) , imag(imag)
    {   
        cout<<"Complex(int real , int imag)"<<endl; 
    }
    void printRecord( void )
    {
        cout<<"Real : "<<real<<endl;
        cout<<"Imag : "<<imag<<endl;   
    }
}; 
int main5()
{
    Complex c1(10,20); 
    Complex c2(c1); //on c2 object copy ctor will get called 
    c2.printRecord( ); 
    return 0;
}

int main()
{
    Complex c1(10,20); 
    Complex c2; 
    c2 = c1; //assignment (no copy ctor will get called )
    cout<<"------------------"<<endl;
    c1.printRecord( ); 
    cout<<"------------------"<<endl;
    c2.printRecord( );
    return 0;
    // shallow copy will occur by default.Because you did not explicitly write a custom assignment operator for the Complex class, the C++ compiler automatically generates a default assignment operator (operator=). This default operator performs a member-wise assignment, which means it copies each member variable from the source object (c1) to the target object (c2) without creating a new copy of the data. In this case, since the Complex class only contains primitive data types (int), the default assignment operator works correctly and does not cause any issues. However, if the class had pointer members or dynamically allocated resources, a shallow copy could lead to problems such as double deletion or memory leaks. In such cases, you would need to implement a custom assignment operator to perform a deep copy of the resources.

    Complex c3(c1); //on c3 object copy ctor will get called, and if you don't provide a copy constructor then also it will work because compiler will provide a default copy constructor which performs shallow copy. 
    cout<<"------------------"<<endl;

    c3.printRecord( ); 
    return 0;
}

int main4()
{
    Complex c1(10,20); 
    Complex c2 = c1; //initialization (on c2 object copy ctor will get called )
    c1.printRecord( );
    cout<<"------------------"<<endl;
    c2.printRecord( );
    return 0;
}

int main2()
{
    Complex c1(10,20); //on c1 object parameterized ctor will get called 
    return 0;
}

int main1()
{
    Complex c1; //on c1 parameterless ctor will get called 
    return 0;
}
