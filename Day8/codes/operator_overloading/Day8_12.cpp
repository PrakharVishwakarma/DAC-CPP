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
    friend istream& operator>>(istream &cin , Complex &c1); 
}; 
ostream& operator<<(ostream &cout , Complex &c1)
{
    cout<<"Real : "<<c1.real<<endl;
    cout<<"Imag : "<<c1.imag<<endl;
    return cout; 
}
istream& operator>>(istream &cin , Complex &c1)
{
    cout<<"Real : "; 
    cin>>c1.real; 
    cout<<"Imag : "; 
    cin>>c1.imag; 
    return cin; 
}
int main()
{
    Complex c1; 
    Complex c2; 
    cin>>c1>>c2; // operator>>(operator>>(cin , c1) , c2); 
    cout<<c1<<c2;// operator<<(operator<<(cout, c1) , c2);  
    return 0;
}
