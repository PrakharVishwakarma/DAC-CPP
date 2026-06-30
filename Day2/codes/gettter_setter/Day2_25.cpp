#include<iostream> 
using namespace std; 
class Complex 
{
    private: 
    int real; 
    int imag; 
    public: 

    //this = &c1; 
    //setter function / mutators 
    void setReal(int real) 
    {   
        this->real = real; 
    }
    //getter functions / inspectors 
    int getReal( void )
    {
        return this->real; 
    }

    void acceptRecord( void )
    {
        cout<<"Real : "; 
        cin>>real; 
        cout<<"Imag : "; 
        cin>>imag; 
    }
    //facilitators 
    void printRecord( void )
    {
        cout<<"Real : "<<this->real<<endl; 
        cout<<"Imag : "<<this->imag<<endl; 
    }
}; 
int main()
{
    Complex c1; 
    c1.acceptRecord( ); //c1.acceptRecord(&c1 ); => 10 20
    c1.printRecord( );  // c1.printRecord(&c1);  
    c1.setReal(500); // c1.setReal(&c1,500); 
    c1.printRecord( );  // c1.printRecord(&c1);  
    int real = c1.getReal( );  // c1.getReal(&c1); 
    cout<<"Real : "<<real; 
    return 0;
}
