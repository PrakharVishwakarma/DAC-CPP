#include<iostream> 
using namespace std; 
class Complex 
{
    private: 
    int real; 
    int imag; 
    public: 
    Complex(void ) : real(0) , imag(0)
    {   }
    Complex(int real , int imag) : real(real) , imag(imag)
    {   }
    Complex(int value)
    {
        cout<<"Complex(int value)"<<endl; 
        this->real = value; 
        this->imag = value; 
    }
    void operator=(const Complex &other)
    {
        cout<<" void operator=(const Complex &other)"<<endl; 
        this->real = other.real; 
        this->imag = other.imag; 
    }
    void printRecord(void)
    {
        cout<<"Real : "<<real<<endl;
        cout<<"Imag : "<<imag<<endl;
    }
}; 
//converting primitive to user-defined type 
int main()
{
    int number = 10; 
    Complex c1; 
    cout<<"Checkpoint 1"<<endl;
    c1 = number;
    cout<<"Checkpoint 2"<<endl;
    //Complex(value);  
    c1.printRecord();
    return 0;
}
