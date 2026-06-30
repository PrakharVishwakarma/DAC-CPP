#include<iostream> 
// if i want to give same name to the function and if number of 
// parameters are same then atleast type of one parameter must be 
// different 
using namespace std; 

void add(int num1 , int num2)
{
    int result = num1 + num2; 
    cout<<"Result : "<<result<<endl; 
}
void add(int num1 , float num2)
{
    float result = num1 + num2; 
    cout<<"Result : "<<result<<endl; 
}
int main()
{
    ::add(10,20); 
    ::add(10,20.1f); 
    return 0;
}
