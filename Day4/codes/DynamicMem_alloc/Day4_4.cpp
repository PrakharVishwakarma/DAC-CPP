#include<iostream> 
using namespace std; 
class Complex 
{
    private: 
    int real; 
    int imag; 
    public: 
    Complex( void ) : real(0) , imag(0)
    {   
        cout<<"Complex( void )"<<endl; 
    }
    Complex(int real , int imag) : real(real) , imag(imag)
    {   
        cout<<"Complex(int real , int imag) "<<endl; 
    }
    void accept( void )
    {
        cout<<"Real : "; 
        cin>>real; 
        cout<<"Imag : "; 
        cin>>imag; 
    }
    void display( void )
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
    Complex *ptr = new Complex[2]{Complex(10,20), Complex(30,40)}; 
    for(int index = 0 ; index < 2 ; index++)
    {
        ptr[index].display( ); 
    }
    delete[] ptr;// to avoid memory leakage  
    ptr = NULL; // to avoid dangling pointer 
    return 0;
}

int main5()
{
    Complex *ptr = new Complex[2]; 
    for(int index = 0 ; index < 2 ; index++)
    {
        ptr[index].display( ); 
    }
    delete[] ptr; 
    ptr = NULL; 
    return 0;
}

int main4()
{
    Complex *ptr = new Complex(10,20); 
    //paramterized ctor will get called 
    ptr->display( ); 
    delete ptr; //to avoid memory leakage 
    ptr = NULL; // to avoid dangling pointer 
    return 0;
}

int main3()
{
    Complex *ptr = new Complex( ); 
    ptr->display( ); 
    delete ptr;
    ptr = NULL;  
    return 0;
}

int main2()
{
    Complex c1(10,20); // on c1 parameterized ctor will get called  
    c1.display( ); 
    return 0;
}

int main1()
{
    Complex c1; // on c1 parameterless ctor will get called 
    c1.display( ); 
    return 0;
}
