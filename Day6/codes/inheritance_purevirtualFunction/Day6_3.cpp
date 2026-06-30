#include<iostream> 
using namespace std;
class Shape 
{
    protected: 
    double area; 
    public: 
    void acceptRecord( void )
    {
        //TODO 
    }
    void calculateArea( void )
    {
        //TODO 
    }
    void printRecord( void )
    {
        cout<<"Area : "<<area<<endl; 
    }
}; 
class Rectangle : public Shape
{
    private: 
    double length; 
    double breadth; 
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
class Circle : public Shape
{
    private: 
    double radius; 
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
int main1()
{
    Circle c; 
    c.acceptRecord( ); 
    c.calculateArea( ); 
    c.printRecord( ); 
    return 0;
}

int main()
{
    Rectangle rect; 
    rect.acceptRecord( ); 
    rect.calculateArea( ); 
    rect.printRecord( ); 
    return 0;
}
