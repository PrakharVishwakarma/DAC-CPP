#include<stdio.h> 
struct Employee
{
    char name[20]; //20
    int id; //4 
    float salary; //4  
}; 
//Global function 
void accept_record(struct Employee *ptr)
{
    printf("Name : "); 
    scanf("%s",ptr->name); 
    printf("Id : "); 
    scanf("%d",&ptr->id); 
    printf("Salary : "); 
    scanf("%f",&ptr->salary); 
}
void print_record(struct Employee *ptr)
{
    printf("\nName : %s\n",ptr->name); 
    printf("Empid : %d\n",ptr->id); 
    printf("Salary : %.2f\n",ptr->salary); 
}
int main()
{
    struct Employee emp; 
    accept_record(&emp);
    emp.salary = 0.0;  
    print_record(&emp); 
   return 0;
}
