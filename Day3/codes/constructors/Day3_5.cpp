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
//constructor cannot be declared static , const , volatile , virtual 
int main()
{
    //Complex *ptr; //constructor is not called on pointer 
    //ptr->Complex( ); // NOT OK 
    
    Complex* c3 = new Complex();    // ctor get called
    
    Complex c1;     // ctor get called
    Complex &c2 = c1; // on reference no ctor will get called 
    
    return 0;
}

int main1()
{
    Complex c1; 
    c1.printRecord( ); 
    return 0;
}
