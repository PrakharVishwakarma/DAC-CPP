#include<iostream> 

using namespace std; 

class Complex 
{
    private: 
    int real; 
    int imag; 
    public: 
    //className * const this; 
    //Complex * const this = &c1 
    void acceptRecord( )
    {
        cout<<"Real : "; 
        cin>>real; 
        cout<<"Imag : "; 
        cin>>imag;  
    }
    void printRecord( )
    {
        cout<<"Real : "<<real; 
        cout<<"Imag : "<<imag; 
    }
}; 
int main()
{
    Complex c1; 
    c1.acceptRecord( );// c1.acceptRecord(&c1); 
    return 0;
}
