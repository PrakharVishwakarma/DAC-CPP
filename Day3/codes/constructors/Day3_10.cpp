#include<iostream> 
using namespace std; 
class Complex
{
private:
    int real;
    int imag;
public:
    //Complex( void ) = delete;     // explicitly disabling the default constructor
    
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
    Complex c1(10,20);
    c1.printRecord( );  

    // Complex c2; //   // When you define ANY parameterized constructor, the compiler automatically STOPS generating the default constructor.
    return 0;
}
