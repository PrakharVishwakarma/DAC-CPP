#include<iostream> 
#include<cstdlib>
using namespace std; 
class Complex 
{
    private: 
    int real; 
    int imag; 
    public: 
    Complex( void ) : real ( 0 ) , imag( 0 )
    {   
        cout<<"Complex( void )"<<endl; 
    } 
    void acceptRecord( )
    {
        cout<<"Real : "; 
        cin>>real; 
        cout<<"Imag : "; 
        cin>>imag; 
    }
    void printRecord( )
    {
        cout<<"Real : "<<real<<endl; 
        cout<<"Imag : "<<imag<<endl; 
    }
    ~Complex( )
    {
        cout<<"~Complex( )"<<endl; 
    }
}; 
int main()
{
    //int *ptr = (int*)malloc(sizeof(int)); 
    Complex *ptr = (Complex*) malloc(sizeof(Complex));
    ptr->acceptRecord( ); 
    ptr->printRecord(  ); 
    free(ptr); 
    ptr = NULL;      
    
    return 0;
}

int main1()
{
    Complex c1; 
    c1.acceptRecord( ); 
    c1.printRecord( ); 
    return 0;
}
