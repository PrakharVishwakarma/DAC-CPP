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
    printf("Name : %s\n",ptr->name); 
    printf("Empid : %d\n",ptr->id); 
    printf("Salary : %.2f\n",ptr->salary); 
}
int menuList( void )
{
    int choice; 
    printf("0.Exit\n"); 
    printf("1.AcceptRecord\n");
    printf("2.PrintRecord\n"); 
    printf("Enter the choice : "); 
    scanf("%d",&choice); 
    return choice; 
}
int main()
{
    struct Employee emp; 
    int choice; 
    while((choice = menuList( ))!=0)
    {
        switch (choice)
        {
        case 1: 
            accept_record(&emp); 
            break;
        case 2: 
            print_record(&emp); 
            break; 
        }
    }
    return 0;
}
