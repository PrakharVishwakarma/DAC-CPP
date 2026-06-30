#include<iostream>
using namespace std; 
// overloading operators as member functions 
class Complex 
{
    private: 
    int real; 
    int imag; 
    public: 
    Complex( void ): real(0) , imag(0)
    {   }
    Complex(int real , int imag) : real(real) , imag(imag)
    {   }
    void printRecord( void )
    {
        cout<<"Real : "<<real<<endl;
        cout<<"Imag : "<<imag<<endl;   
    }
    Complex operator+(Complex &other)
    {
        Complex temp; 
        temp.real = this->real + other.real; 
        temp.imag = this->imag + other.imag; 
        return temp; 
    }
    Complex operator-(Complex &other)
    {
        Complex temp; 
        temp.real = this->real - other.real; 
        temp.imag = this->imag - other.imag; 
        return temp; 
    }
    Complex operator*(Complex &other)
    {
        Complex temp; 
        temp.real = this->real * other.real; 
        temp.imag = this->imag * other.imag; 
        return temp; 
    }
    //this = &c1 
    Complex operator+(int value)
    {
        Complex temp; 
        temp.real = this->real + value;
        temp.imag = this->imag + value; 
        return temp;  
    }
    Complex operator+=(Complex other)
    {
        this->real+=other.real; 
        this->imag+=other.imag; 
        return *this; 
    }
    bool operator==(Complex other)
    {
        return this->real == other.real && this->imag == other.imag; 
    }
    bool operator!=(Complex other)
    {
        return this->real != other.real && this->imag != other.imag; 
    }
    Complex operator++( )
    {
        Complex temp; 
        temp.real = ++this->real; 
        temp.imag = ++this->imag; 
        return temp; 
    }
    Complex operator++(int value)
    {
        Complex temp; 
        temp.real = this->real++; 
        temp.imag = this->imag++; 
        return temp; 
    }
      
}; 
int main()
{
    Complex c1(10,20); 
    Complex c2 = c1++; //c1.operator++(int); 
                       
    
    c1.printRecord( ); //11 21 
    c2.printRecord( ); //10 20 
    return 0;
}
int main8()
{
    Complex c1(10,20); 
    Complex c2 = ++c1; //c1.operator++(); 
                       //c1.operator++(int); 
    
    c1.printRecord( ); //11 21
    c2.printRecord( ); //11 21 
    return 0;
}

int main7()
{
    Complex c1(10,20); 
    Complex c2(30,40); 
    bool result = c1!=c2; //c1.operator!=(c2); 
    if(result == true)
      cout<<"Not equal"; 
    else 
      cout<<"Equal"; 
    return 0;
}

int main6()
{
    Complex c1(10,20); 
    Complex c2(10,20); 
    bool result = c1 == c2; //c1.operator==(c2); 
    if(result == true)
     cout<<"Equal"; 
    else 
     cout<<"Not equal"; 
    return 0;
}

int main5()
{
    Complex c1(10,20); 
    Complex c2(30,40); 
    Complex c3 = c1+=c2; //c1.operator+=(c2); 
    c3.printRecord( ); 
    return 0;
}

int main4()
{
    Complex c1(10,20); 
    Complex c2 = c1 + 5; //c3 = c1.operator+(5);
    c2.printRecord( ); // 15 25  
    return 0;
}

int main3()
{
    Complex c1(10,20); 
    Complex c2(30,40); 
    Complex c3 = c1 * c2; //c3 = c1.operator*(c2); 
    c3.printRecord( ); 
    return 0;
}
int main2()
{
    Complex c1(10,20); 
    Complex c2(30,40); 
    Complex c3 = c1 - c2; //c3 = c1.operator-(c2); 
    c3.printRecord( ); 
    return 0;
}

int main1()
{
    Complex c1(10,20); 
    Complex c2(30,40); 
    Complex c3 = c1 + c2; //c3 = c1.operator+(c2); 
    c3.printRecord( ); //40 60
    return 0;
}
