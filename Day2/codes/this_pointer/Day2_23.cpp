#include<iostream> 
using namespace std; 
class Complex 
{
    private: 
    int real; 
    int imag; 
    public: 
    //Complex * const this = &c1; 
    void initComplex(int real , int imag)
    {
        cout<<"void initComplex(int real , int imag)"<<this<<endl; 
        this->real = real; 
        this->imag = imag; 
    }
    void printRecord( void )
    {
        cout<<"Real : "<<this->real; 
        cout<<"Imag : "<<this->imag;  
    } 
}; 
int main()
{
    Complex c1; 
    c1.initComplex(10,20); 
    c1.printRecord( ); 
    return 0;
}
