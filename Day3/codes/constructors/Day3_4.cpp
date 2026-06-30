#include<iostream> 
using namespace std; 
class Complex 
{
    private: 
    int real; 
    int imag; 
    public: 
    void initComplex( void ) // initialization 
    {
        this->real = 0; 
        this->imag = 0; 
    }
    void acceptRecord( )
    {
        cout<<"Real : "; 
        cin>>real; 
        cout<<"Imag : "; 
        cin>>imag; 
    }
    void printRecord( void )
    {
        cout<<"Real : "<<this->real<<endl; 
        cout<<"Imag : "<<this->imag<<endl; 
    }
}; 
int main()
{
    Complex c1; 
    c1.initComplex( ); // 0 0
    c1.printRecord( ); // 0 0 
    c1.acceptRecord( ); // 10 20 
    c1.printRecord( ); //10 20  
    c1.initComplex( );
    c1.initComplex( ); 
    c1.initComplex( );
    c1.initComplex( );
    return 0;
}
