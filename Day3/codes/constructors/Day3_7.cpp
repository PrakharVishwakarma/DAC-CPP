#include <iostream>
using namespace std;
//If we dont write any ctor inside the class then compiler generate 
//one ctor by default it is called default ctor (compiler defined ctor)
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
    Complex c1; 
    Complex c2; 
    Complex c3; 
    return 0;
}

int main1()
{
    Complex c1; // on c1 object paramerterless ctor will get called 
    Complex c2(10); //on c2 object single parameterized ctor will get called 
    Complex c3(10,20); //on c3 object 2 parameterized ctor will get called 
    return 0;
}
