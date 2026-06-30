#include<iostream>
using namespace std; 
class Complex 
{
    private: 
    int real; 
    int imag; 
    public: 
    Complex( void ): real(0) , imag(0)
    {   }
    Complex(int real , int imag) : real(real) , imag(imag)
    {   }
    Complex(const Complex &other)
    {
        cout<<"Complex(const Complex &other)"<<endl; 
        this->real = other.real; 
        this->imag = other.imag; 
    }
    //this = &c2 
    //other = c1 
    Complex& operator=(const Complex &other)
    {
        this->real = other.real; 
        this->imag = other.imag;
        return *this;  
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
    Complex c3;  
    c3 = c2 = c1; //c3.operator=(c2.operator=(c1)); 
    c2.printRecord( ); 
    c3.printRecord( ); 
    return 0;
}
