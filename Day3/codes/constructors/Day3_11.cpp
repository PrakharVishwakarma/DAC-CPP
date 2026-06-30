#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;
public:
    //parameterless ctor 
    Complex(void)
    {
        cout << "Complex( void )" << this<<endl;
        this->real = 0;
        this->imag = 0;
    }
    //parameterized ctor(single parameter)
    Complex(int value)
    {
        cout<<"Complex(int value)"<<endl; 
        this->real = value; 
        this->imag = value;     
    }
    //parameterized ctor(2 parameterized)
    Complex(int real , int imag)
    {
        cout<<"Complex(int real , int imag)"<<endl; 
        this->real = real; 
        this->imag = imag;     
    }
    void acceptRecord()
    {
        cout << "Real : ";
        cin >> real;
        cout << "Imag : ";
        cin >> imag;
        
    }
    void printRecord(void)
    {
        cout << "Real : " << this->real << endl;
        cout << "Imag : " << this->imag << endl;
    }
};
int main()
{
    Complex *ptr; // no ctor will get called 
    //Complex c1; // on c1 object parameterless ctor will get called 
    //Complex &c2 = c1; // no ctor will get called 
    //Complex c3(10); // single parameterized ctor will get called 
    //Complex c4 = 10; // Complex c4(10); 
    //Complex c5 = 10,20; // Complex c5(10) , 20; // ERROR   
    //Complex c6 = (10,20); // single parameterized with value 20
    //c6.printRecord( );  
    //Complex(10,20);// on annonymous object 2 parameterized ctor will get called  
    //Complex(10,20).printRecord(); // on annonymous object 2 parameterized ctor will get called and print the record 
    //Complex c7 = {10,20}; // 2 parameterized ctor 
    
    return 0;
}

