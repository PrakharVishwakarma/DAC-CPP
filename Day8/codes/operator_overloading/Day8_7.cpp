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
    Complex(int real , int imag) : real(real) , imag(imag)
    {   
        cout<<"Complex(int real , int imag)"<<endl; 
    }
    //this = &c2 
    //other = c1 
    void operator=(Complex other)
    {
        cout<<"void operator=(Complex other)"<<endl; 
        this->real = other.real; 
        this->imag = other.imag; 
    }
    
    void printRecord( void )
    {
        cout<<"Real : "<<real<<endl;
        cout<<"Imag : "<<imag<<endl;   
    }
}; 
int main(void)
{
    Complex c1(10,20); 
    Complex c2; 
    c2 = c1; //c2.operator=(c1); 
    c2.printRecord( ); 
    return 0;
}
