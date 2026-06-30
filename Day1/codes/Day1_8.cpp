#include <stdio.h>
int x; 
class Employee
{   
    //Data members / fields / properties / attributes 
    private: 
    char name[20]; // 20
    int id;        // 4
    float salary;  // 4
    //member function / methods / behaviour / operations 
    public: 
    void accept_record()
    {
        printf("Name : ");
        scanf("%s", name);
        printf("Id : ");
        scanf("%d", &id);
        printf("Salary : ");
        scanf("%f", &salary);
    }
    void print_record()
    {
        printf("Name : %s\n", name);
        printf("Empid : %d\n", id);
        printf("Salary : %.2f\n",salary);
    }
};

int main()
{
    Employee emp;
    //emp.accept_record(); //emp.accept_record(&emp);
    emp.Employee::accept_record( ); 
    //emp.salary = 0.0; 
    //emp.print_record(); //emp.print_record(&emp);
    emp.Employee::print_record( ); 
    return 0;
}
