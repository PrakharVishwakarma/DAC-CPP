#include<iostream> 
using namespace std; 
class Complex 
{   
    int real; 
    int imag; 
    public: 
    Complex(int real = 0 , int imag = 0); 
    void printRecord( void ); 
};
Complex :: Complex(int real ,int imag) : real(real) , imag(imag)
{   }
void Complex :: printRecord( void )
{
    cout<<"Real :"<<real<<endl; 
    cout<<"Imag :"<<real<<endl;
}

int main()
{
    Complex c1; 
    Complex c2(10,20); 
    //c1.printRecord( ); 
    c2.printRecord( ); 
    return 0;
}
/*
class Complex 
{   
    int real; 
    int imag; 
    public: 
    Complex(int real = 0 , int imag = 0) : real(real) , imag(imag)
    {   }
    void printRecord( void )
    {
        cout<<"Real :"<<real<<endl; 
        cout<<"Imag :"<<real<<endl;
    }
};

int main()
{
    Complex c1; 
    Complex c2(10,20); 
    //c1.printRecord( ); 
    c2.printRecord( ); 
    return 0;
}
*/ 