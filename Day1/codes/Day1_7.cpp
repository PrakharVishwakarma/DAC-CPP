#include <stdio.h>
struct Employee
{   
    private: 
    char name[20]; // 20
    int id;        // 4
    float salary;  // 4
    // Global function
    public: 
    void accept_record(/*struct Employee *ptr*/)
    {
        printf("Name : ");
        scanf("%s", name);
        printf("Id : ");
        scanf("%d", &id);
        printf("Salary : ");
        scanf("%f", &salary);
    }
    void print_record(/*struct Employee *ptr*/)
    {
        printf("Name : %s\n", name);
        printf("Empid : %d\n", id);
        printf("Salary : %.2f\n",salary);
    }
};

int main()
{
    Employee emp;
    emp.accept_record(); //emp.accept_record(&emp);
    //emp.salary = 0.0; 
    emp.print_record(); //emp.print_record(&emp);
    return 0;
}
