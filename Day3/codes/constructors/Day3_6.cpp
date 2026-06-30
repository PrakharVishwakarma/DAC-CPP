#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int imag;

private:
    Complex(void)
    {
        cout << "Complex( void )" << endl;
        this->real = 0;
        this->imag = 0;
    }

public:
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
    //Complex c1; // NOT OK ( ctor is private )
    return 0;
}
