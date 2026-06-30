#include<iostream> 
using namespace std; 
class Complex
{
private:
    int real;
    int imag;
public:
    Complex( void ) = default; //C++11 
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
    Complex c1; 
    return 0;
}
