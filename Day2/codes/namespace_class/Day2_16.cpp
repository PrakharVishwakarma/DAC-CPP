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
        //  Declarations 
        void acceptRecord(void); 
        void printRecord(void); 
    }; // end of class
} // end of namespace
using namespace ntest; 
void Employee :: acceptRecord(void)
{
    cout<<"Class defined globally"<<endl;
    cout << "Name : ";
    cin >> name;
    cout << "Empid : ";
    cin >> empid;
    cout << "Salary : ";
    cin >> salary;
}
void Employee :: printRecord(void)
{
    cout << "Name : " << name << endl;
    cout << "Empid :" << empid << endl;
    cout << "Salary : " << salary << endl;
}
int main()
{
    using namespace ntest;
    Employee emp;
    emp.acceptRecord();
    emp.printRecord();
    return 0;
}
