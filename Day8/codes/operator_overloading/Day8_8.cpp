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
    void printRecord( void )
    {
        cout<<"Real : "<<real<<endl;
        cout<<"Imag : "<<imag<<endl;   
    }
    friend void operator<<(ostream &cout , Complex &other ); 
}; 
//overloading insertion operator 
void operator<<(ostream &cout , Complex &other )
{
    cout<<other.real<<endl; 
    cout<<other.imag<<endl; 
}
int main()
{
    Complex c1(10,20); 
    cout<<c1; //operator<<(cout , c1); 
    return 0;
}
