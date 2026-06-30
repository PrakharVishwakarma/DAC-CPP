#include<iostream> 
using namespace std;
void add(int n1 = 0 , int n2 = 0 , int n3 = 0 , int n4 = 0 , int n5 = 0); 
int main()
{
    ::add(10,20,30,40,50); 
    //::add(10,20,30,40); 
    //::add(10,20,30); 
    //::add(10,20); 
    //::add(10); 
    //::add(); 
    return 0;
}
void add(int n1, int n2, int n3, int n4 , int n5)
{
    int result = n1 + n2 + n3 + n4 + n5; 
    cout<<"Result : "<<result<<endl;
}
/*
void add(int n1 = 0 , int n2 = 0 , int n3 = 0 , int n4 = 0 , int n5 = 0)
{
    int result = n1 + n2 + n3 + n4 + n5; 
    cout<<"Result : "<<result<<endl;
}
int main()
{
    ::add(10,20,30,40,50); 
    //::add(10,20,30,40); 
    //::add(10,20,30); 
    //::add(10,20); 
    //::add(10); 
    //::add(); 
    return 0;
}*/ 
