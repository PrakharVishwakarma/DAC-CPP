#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    // parameterless ctor
    Complex(void)
    {
        cout << "Complex( void )" << endl;
        this->real = 0;
        this->imag = 0;
    }
    // parameterized ctor(single parameter)
    Complex(int value)
    {
        cout << "Complex(int value)" << endl;
        this->real = value;
        this->imag = value;
    }
    // parameterized ctor(2 parameterized)
    Complex(int real, int imag)
    {
        cout << "Complex(int real , int imag)" << endl;
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
    Complex c1(10, 20);
    Complex c2(30, 40);
    Complex c3(50, 60);
    Complex arr[3] = {c1, c2, c3};
    // Complex arr[3] = {Complex(10,20),Complex(30,40), Complex(50,60)};
    for (int index = 0; index < 3; index++)
        arr[index].printRecord();

    Complex *arr1 = new Complex[3];
    arr1[0] = c1;
    arr1[1] = c2;
    arr1[2] = c3;
    
    Complex **arr2 = new Complex *[5];
    arr2[0] = new Complex();
    arr2[1] = new Complex();
    arr2[2] = new Complex();
    arr2[3] = new Complex();
    arr2[4] = new Complex();

    return 0;
}

int main2()
{
    Complex arr[2];
    for (int index = 0; index < 2; index++)
        arr[index].acceptRecord();
    for (int index = 0; index < 2; index++)
        arr[index].printRecord();
    return 0;
}

int main1()
{
    Complex arr[3];
    for (int index = 0; index < 3; index++)
        arr[index].printRecord();
    return 0;
}
