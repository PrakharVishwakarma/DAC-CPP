#include<iostream> 
// if i want to give same name to the function and if number of 
// parameters are same then order of parameters must be different 

using namespace std; 

void add(int num1 , float num2)
{
    float result = num1 + num2; 
    cout<<"Result : "<<result<<endl; 
}
void add(float num1 , int num2)
{
    float result = num1 + num2; 
    cout<<"Result : "<<result<<endl; 
}
/*
int add(int num1 , int num2)
{
    int result = num1 + num2; 
    cout<<"Result : "<<result<<endl; 
    return result; 
}

float add(int num1 , int num2)
{
    float result = num1 + num2; 
    cout<<"Result : "<<result<<endl; 
    return float(result);
}
*/
/*cannot overload functions distinguished by return type aloneC/C++(311)*/
int main()
{
    ::add(10,20.1f); 
    ::add(10.1f,20); 

    /*
    int result1 = ::add(10,20);
    float result2 = ::add(10,20);
    cout<<"result1 : "<<result1<<endl;
    cout<<"result2 : "<<result2<<endl;
    */
    return 0;
}
