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
class Employee
{
private:
    string name;  // 24
    int age;      // 4
    int empid;    // 4
    float salary; // 4
public:
    Employee(void) : name(""), age(0), empid(0), salary(0.0)
    {
    }
    Employee(string name, int age, int empid, double salary) : name(name), age(age), empid(empid), salary(salary)
    {
    }
    void showRecord(void)
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << name << endl;
        cout << "Empid : " << name << endl;
        cout << "Salary : " << name << endl;
    }
};
int main()
{
    Employee e1;
    cout << sizeof(e1); // 36
    return 0;
}

int main1()
{
    Person p1;
    cout << sizeof(p1) << endl;
    return 0;
}
