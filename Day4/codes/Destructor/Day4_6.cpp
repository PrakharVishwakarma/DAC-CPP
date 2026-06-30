#include<iostream> 
using namespace std; 

class Array
{
    private: 
    int size; 
    int *arr; 
    public: 
    Array(int size)
    {
        cout<<"Array(int size)"<<this<<endl; 
        this->size = size; 
        this->arr = new int[this->size]; 
    }
    void acceptRecord( void )
    {
        for(int index = 0 ; index < this->size ; index++)
        {
            cout<<"Enter ele : "; 
            cin>>arr[index];  
        }
    }
    void printRecord( void )
    {
        for(int index = 0 ; index < this->size ; index++)
        {
            cout<<"Ele : "<<arr[index]<<endl; 
        }
    }
    ~Array( )
    {
        if(this->arr!=NULL)
        {
            cout<<"~Array( )"<<this<<endl;  
            delete[] this->arr; // to avoid memory leakage  
            this->arr = NULL; // to avoid dangling pointer 
        }
    }
    
}; 
int main()
{
    Array a1(3);
    Array a2(3);
    Array a3(3);
    return 0;
}

int main1()
{
    Array a1(3); 
    a1.acceptRecord( ); 
    a1.printRecord( ); 
    return 0;
}
