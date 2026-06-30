#include<iostream> 
using namespace std; 
void swap_object(int *a , int *b)
{
    int temp; 
    temp = *a; 
    *a = *b; 
    *b = temp; 
}
void swap_object(double *a , double *b)
{
    double temp; 
    temp = *a; 
    *a = *b; 
    *b = temp; 
}
int main()
{
    int a = 10 , b = 20;
    swap_object(&a,&b); 
    cout<<"a : "<<a<<endl; 
    cout<<"b : "<<b<<endl; 
    double x = 1.3 , y = 2.1; 
    swap_object(&x,&y); 
    cout<<"x : "<<x<<endl; 
    cout<<"y : "<<y<<endl; 
    return 0;
}
