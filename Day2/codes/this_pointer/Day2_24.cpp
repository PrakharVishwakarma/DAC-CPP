#include<iostream> 
using namespace std; 

class Complex 
{
    private: 
    int real; 
    int imag; 
    public: 
    void acceptRecord( void )
    {
        cout<<"Real : "; 
        cin>>this->real; 
        cout<<"Imag : "; 
        cin>>this->imag; 
    }
    void printRecord( void )
    {
        cout<<"Real : "<<this->real<<endl; 
        cout<<"Imag : "<<this->imag<<endl;
    }
    Complex sum(Complex other)
    {
        Complex temp; 
        temp.real = this->real + other.real; 
        temp.imag = this->imag + other.imag; 
        return temp; 
    }
}; 
int main()
{
    Complex c1; 
    c1.acceptRecord( ); // c1.acceptRecord(&c1); // 10 20 
    Complex c2; 
    c2.acceptRecord( ); // c2.acceptRecord(&c2); // 30 40 
    Complex c3; 
    c3 = c1.sum(c2); 
    c3.printRecord( ); 
    return 0;
}
