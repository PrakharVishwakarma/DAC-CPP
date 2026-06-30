#include<iostream> 
using namespace std; 
// In procedural programming language we cannot give same name 
// to the function 
void add(int a , int b)
{
    int result = a + b; 
    cout<<"Result : "<<result<<endl; 
}
void sum(int a , float b)
{
    float result = a + b; 
    cout<<"Result : "<<result<<endl; 
}
int main()
{
    ::add(10,20); 
    ::sum(10,1.1f); 
    return 0;
}
