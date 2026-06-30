#include <iostream>
using namespace std;
class InvalidArgumentException
{
private:
    string message;

public:
    InvalidArgumentException(string message)
    {
        this->message = message;
    }
    string getMessage(void)
    {
        return this->message;
    }
};
class Complex
{
private:
    int real;
    int imag;

public:
    Complex(void) : real(0), imag(0)
    {
    }
    void setReal(int real)
    {
        if (real < 0)
            throw InvalidArgumentException("Invalid Real");
        this->real = real;
    }
    void setImag(int imag)
    {
        if (imag < 0)
            throw InvalidArgumentException("Invalid Imag");
        this->imag = imag;
    }
    int getReal(void)
    {
        return this->real;
    }
    int getImag(void)
    {
        return this->imag;
    }
};

void acceptRecord(Complex &complex)
{
    try
    {
        int real, imag;
        cout << "Real : ";
        cin >> real;
        complex.setReal(real);

        cout << "Imag : ";
        cin >> imag;
        complex.setImag(imag);
    }
    catch (InvalidArgumentException ex)
    {
        cout << ex.getMessage() << endl;
    }
}
void printRecord(Complex &complex)
{
    cout << "Real : " << complex.getReal() << endl;
    cout << "Imag : " << complex.getImag() << endl;
}
int menuList(void)
{
    int choice;
    cout << "0.Exit" << endl;
    cout << "1.AcceptRecord." << endl;
    cout << "2.PrintRecord." << endl;
    cout << "Enter the choice : ";
    cin >> choice;
    return choice;
}
int main()
{
    try
    {
        int choice;
        Complex complex;
        while ((choice = ::menuList()) != 0)
        {
            try
            {
                switch (choice)
                {
                case 1:
                    ::acceptRecord(complex);
                    break;
                case 2:
                    ::printRecord(complex);
                    break;
                }
            }
            catch (InvalidArgumentException ex)
            {
                cout << ex.getMessage() << endl;
            }
        }
    }
    catch (...)
    {
        cout<<"Generic catch block"<<endl; 
    }

    return 0;
}
