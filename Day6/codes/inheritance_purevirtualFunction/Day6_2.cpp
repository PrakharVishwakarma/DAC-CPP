#include<iostream> 
using namespace std; 
class Rectangle 
{
    private: 
    double length; 
    double breadth; 
    double area; 
    public: 
    void acceptRecord( void )
    {
        cout<<"Length : "; 
        cin>>length; 
        cout<<"Breadth : "; 
        cin>>breadth;  
    }
    void calculateArea( void )
    {
        this->area = this->length * this->breadth; 
    }
    void printRecord( void )
    {
        cout<<"Area : "<<area<<endl; 
    }
}; 
class Math 
{
    public:  
    static const float PI; 
    static float pow(float base , int index)
    {
        float result = 1.0; 
        for(int count = 1 ; count <= index ; count++)
        {
            result = result * base; 
        }
        return result; 
    }
}; 
const float Math::PI = 3.14; 
class Circle
{
    private: 
    double radius; 
    double area; 
    public: 
    void acceptRecord( void )
    {
        cout<<"Radius : "; 
        cin>>radius; 
    }
    void calculateArea( void )
    {
        this->area = Math::PI * Math::pow(this->radius,2); 
    }
    void printRecord( void )
    {
        cout<<"Area : "<<this->area<<endl; 
    }
}; 
int main()
{
    Circle c; 
    c.acceptRecord( ); 
    c.calculateArea( ); 
    c.printRecord( ); 
    return 0;
}

int main1()
{
    Rectangle rect; 
    rect.acceptRecord( ); 
    rect.calculateArea( ); 
    rect.printRecord( ); 
    return 0;
}
