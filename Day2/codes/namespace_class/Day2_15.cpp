#include <iostream>
using namespace std;
namespace ntest
{
    class Employee
    {
        // data-members
    private:
        char name[20];
        int empid;
        float salary;

    public:
        void acceptRecord(void)
        {
            cout << "Name : ";
            cin >> name;
            cout << "Empid : ";
            cin >> empid;
            cout << "Salary : ";
            cin >> salary;
        }
        void printRecord(void)
        {
            cout << "Name : " << name << endl;
            cout << "Empid :" << empid << endl;
            cout << "Salary : " << salary << endl;
        }
    }; //end of class 
}// end of namespace 
int main()
{
    using namespace ntest; 
    Employee emp;
    emp.acceptRecord();
    emp.printRecord();
    return 0;
}
