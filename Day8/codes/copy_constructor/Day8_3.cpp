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
    //this = &c2 
    //other = c1 
    Complex(const Complex &other)
    {
        cout<<"Complex(const Complex &other)"<<endl; 
        this->real = other.real; 
        this->imag = other.imag; 
    }
    Complex(int real , int imag) : real(real) , imag(imag)
    {   }
    void printRecord( void )
    {
        cout<<"Real : "<<real<<endl;
        cout<<"Imag : "<<imag<<endl;   
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
    try
    {
        Complex c1; 
        throw c1; 
    }
    catch(Complex other)
    {
        //TODO 
    }
    
    return 0;
}

int main3()
{
    Complex c1(10,20);
    Complex c2(30,40); 
    Complex c3 = c1.sum(c2); 

    return 0;
}

int main2()
{
    Complex c1(10,20); 
    Complex c2(c1); //on c2 object copy ctor will get called 
    c2.printRecord( ); 
    return 0;
} 
int main1()
{
    Complex c1(10,20); 
    Complex c2 = c1; //on c2 object copy ctor will get called 
    c2.printRecord( ); 
    return 0;
}



