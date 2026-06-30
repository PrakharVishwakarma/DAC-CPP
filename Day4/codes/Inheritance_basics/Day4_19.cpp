#include <iostream>
using namespace std;

class Person
{
private:
    string name; // 24 bytes
    int age;     // 4 bytes
public:
    Person(void) : name(""), age(0)
    {
    }
    Person(string name, int age) : name(name), age(age)
    {
    }
    void displayRecord(void)
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};
class Employee : public Person
{
private:
    // string name;//24
    // int age; //4
    int empid;    // 4
    float salary; // 4
public:
    Employee(void) : empid(0), salary(0.0)
    {
    }
    Employee(string name, int age, int empid, double salary) : empid(empid), salary(salary)
    {
    }
    void showRecord(void)
    {
        // cout<<"Name : "<<name<<endl;
        // cout<<"Age : "<<age<<endl;
        cout << "Empid : " << empid << endl;
        cout << "Salary : " << salary << endl;
    }
};
int main()
{
    Employee e1;
    cout << "Size of Employee object: " << sizeof(e1) << endl;
    return 0;

    Person p1;
    cout << "Size of Person object: " << sizeof(p1) << endl;
    return 0;
}
