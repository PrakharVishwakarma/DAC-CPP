#include<iostream>
using namespace std; 
int main()
{
    int *ptr = new int[3]; //12 bytes on heap section 
    ptr[0] = 10; 
    ptr[1] = 20; 
    ptr[2] = 30; 
    for(int index = 0 ; index < 3 ; index++)
        cout<<"Value : "<<ptr[index]<<endl; 
    delete[] ptr;//to avoid memory leakage 
    ptr = NULL; // to avoid dangling pointer  
    return 0;
}

int main2()
{
    int *ptr = new int; // Garbage 

    int *ptr1 = new int( ); // default 0 

    int *ptr2 = new int(10); //default 10 
    return 0;
}

int main1()
{
    //int *ptr = (int*)malloc(sizeof(int)); 

    int *ptr = new int; //4 bytes memory allocated on heap section 
    *ptr = 100; 
    cout<<"value : "<<*ptr;
    delete ptr; // to avoid memory leakage 
    ptr = NULL; // to avoid dangling pointer 
    return 0;
}
