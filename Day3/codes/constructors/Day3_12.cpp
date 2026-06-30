#include<iostream> 
using namespace std; 
class Complex
{
    private: 
    int real; 
    int imag; 
    public: 
    Complex( void ) 
    {
        cout<<"Complex( void )"<<endl; 
        this->real = 0; 
        this->imag = 0; 
    }
    Complex( int real , int imag ) : Complex( )   // delegating constructor (calling parameterless ctor to initialize the data members)
    {
        // Body here is optional (And runs AFTER delegated ctor completes)

        cout<<"Complex( int real , int imag )"<<endl; 
        this->real = real;  
        this->imag = imag; 
    }
    void printRecord(void)
    {
        cout << "Real : " << this->real << endl;
        cout << "Imag : " << this->imag << endl;
    }
}; 
int main()
{
    Complex c1(10,20); 
    c1.printRecord( ); 
    return 0;
}
/*
class Complex
{
    private: 
    int real; 
    int imag; 
    public: 
    Complex( void ) : Complex(10,20)    
    {
        cout<<"Complex( void )"<<endl; 
        this->real = 0; 
        this->imag = 0; 
    }
    Complex( int real , int imag )
    {
        cout<<"Complex( int real , int imag )"<<endl; 
        this->real = real;  
        this->imag = imag; 
    }
    void printRecord(void)
    {
        cout << "Real : " << this->real << endl;
        cout << "Imag : " << this->imag << endl;
    }
}; 
int main()
{
    Complex c1; 
    c1.printRecord( ); 
    return 0;
}
*/ 