#include <iostream>
using namespace std;
class Shape
{
protected:
    double area;

public:
    virtual void acceptRecord(void) = 0;
    virtual void calculateArea(void) = 0;
    void printRecord(void)
    {
        cout << "Area : " << area << endl;
    }
};
class Rectangle : public Shape
{
private:
    double length;
    double breadth;

public:
    void acceptRecord(void)
    {
        cout << "Length : ";
        cin >> length;
        cout << "Breadth : ";
        cin >> breadth;
    }
    void calculateArea(void)
    {
        this->area = this->length * this->breadth;
    }
    void printRecord(void)
    {
        cout << "Area : " << area << endl;
    }
};
class Math
{
public:
    static const float PI;
    static float pow(float base, int index)
    {
        float result = 1.0;
        for (int count = 1; count <= index; count++)
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
    void acceptRecord(void)
    {
        cout << "Radius : ";
        cin >> radius;
    }
    void calculateArea(void)
    {
        this->area = Math::PI * Math::pow(this->radius, 2);
    }
    void printRecord(void)
    {
        cout << "Area : " << this->area << endl;
    }
};
class ShapeFactory
{
public:
    static Shape* getInstance(int choice)
    {
        Shape *shape = NULL;
        switch (choice)
        {
        case 1:
            shape = new Rectangle(); // upcasting
            break;
        case 2:
            shape = new Circle(); // upcasting
            break;
        }
        return shape;
    }
    static int menuList(void)
    {
        int choice;
        cout << "0.Exit" << endl;
        cout << "1.Rectangle" << endl;
        cout << "2.Circle" << endl;
        cout << "Enter the choice : ";
        cin >> choice;
        return choice;
    }
};

int main()
{
    int choice; 
    while((choice = ShapeFactory::menuList())!=0)
    {
        Shape *ptr = ShapeFactory::getInstance(choice); 
        if(ptr!=NULL)
        {
            ptr->acceptRecord( ); 
            ptr->calculateArea( ); 
            ptr->printRecord( ); 
        }
        delete ptr; 
        ptr = NULL; 
    }
    return 0;
}
