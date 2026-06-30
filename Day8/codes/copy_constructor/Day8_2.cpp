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
       this->size = size; 
       this->arr = new int[this->size];   
    }
    //this = &a2 
    //other = a1 
    Array(const Array &other)
    {   
        //deep copy 
        //1.Copy the required size( length, row/col/ array size etc ) from source object into destination object.
        this->size = other.size; 
        //2. Allocate new resource for destination object
        this->arr = new int[this->size];
        //3. Copythecontentsfrom resource of source object into resource of destination object.
        for(int index = 0 ; index < this->size ; index++)
        {
            this->arr[index] = other.arr[index]; 
        } 
    }
    void acceptRecord( void )
    {
        for(int index = 0 ; index < this->size ; index++)
        {
            cout<<"Ele : "; 
            cin>>this->arr[index]; 
        }
    }
    void printRecord( void )
    {
        for(int index = 0 ; index < this->size ; index++)
        {
            cout<<"Ele : "<<this->arr[index]<<endl; 
        }
    }
    ~Array( )
    {
        if(this->arr!=NULL)
        {
            delete[] this->arr; 
            this->arr = NULL; 
        }
    }
}; 
int main()
{
    Array a1(3); 
    a1.acceptRecord( ); // 10 20 30 
    a1.printRecord( ); 
    Array a2 = a1; 
    cout<<endl; 
    a1.printRecord( ); 
    return 0;
}
int main1()
{
    Array a1(3); 
    a1.acceptRecord( ); 
    a1.printRecord( ); 
    return 0;
}
