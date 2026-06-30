#include<iostream> 
using namespace std; 
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
    void printRecord( void )
    {
        cout<<"Real : "<<real<<endl;
        cout<<"Imag : "<<imag<<endl;   
    }
    friend ostream& operator<<(ostream &cout , Complex &c1); 
}; 
ostream& operator<<(ostream &cout , Complex &c1)
{
    cout<<"Real : "<<c1.real<<endl;
    cout<<"Imag : "<<c1.imag<<endl;
    return cout; 
}
int main()
{
    Complex c1(10,20);
    Complex c2(10,20);
    cout<<c1<<c2; //operator<<(operator<<(cout , c1) , c2); 
    return 0;
}
