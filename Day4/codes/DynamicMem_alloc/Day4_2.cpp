#include<iostream> 

using namespace std; 

int main()
{   
    int count = -1; 
    try
    {
       int *ptr = new int[count]; 
       *ptr = 100; 
       cout<<"Value : "<<*ptr<<endl; 
       delete ptr; 
       ptr = NULL;   
    }
    catch(bad_alloc ex)
    {
        cout<<ex.what( )<<endl;  
    }
    
    return 0;
}

int main1()
{
    //int **ptr = (int**) calloc(4 , sizeof(int*)); 

    int **ptr = new int*[4]; 
    for(int index = 0 ; index < 4 ; index++)
    {
        ptr[index ] = new int[3]; 
    }
    // TODO :ACCEPT , DISPLAY

    for(int index = 0 ; index < 4 ; index++)
    {
        delete[] ptr[index]; 
        ptr[index] = NULL; 
    }
    delete[] ptr; 
    ptr = NULL; 
    return 0;
}
