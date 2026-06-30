#include <iostream>
using namespace std;
class Array
{
private:
    int size;
    int *arr;

public:
    Array(int size)
    {
        this->arr = NULL;
        this->size = size; 
        if (size < 1)
            throw "Invalid Size";
        this->arr = new int[this->size];
        for (int index = 0; index < this->size; index++)
            this->arr[index] = 0;
    }
    Array(const Array &other)
    {   
        //deep copy 
        //1.copy the size 
        this->size = other.size; 
        //2.Allocate the memory 
        this->arr = new int[this->size];
        //3.Copy the contents 
        for(int index = 0 ; index < this->size ;index++)
            this->arr[index] = other.arr[index];  
    }
    int get(int index)
    {
        if(index < 0 || index >= this->size)
            cout<<"Invalid Index"; 
        return this->arr[index]; 
    }
    void set(int index , int value)
    {
        if(index < 0 || index >= this->size) 
            cout<<"Invalid Index";  
        this->arr[index] = value; 
    }
    void accept( void )
    {
        cout<<"Enter "<<this->size<<" Elements : "; 
        for(int index = 0 ; index < this->size ;index++)
        {
            cin>>this->arr[index]; 
        }
    }
    void display( void )
    {
        cout<<"Array : ";
        for(int index = 0 ; index < this->size ;index++)
        {
            cout<<this->arr[index]<<", "; 
        }
        cout<<endl;  
    }
    
    /*
    //this->arr ==> memory leakage 
    void copy(const Array &other)
    {
        this->size = other.size; 
        this->arr = other.arr; 
    } 
    */ 
    void copy(const Array &other)
    {
        
        //release the memory this->arr 
        delete[] this->arr; 
        //copy the size 
        this->size = other.size; 
        //allocate the memory 
        this->arr = new int[this->size]; 
        //copy the contents 
        for(int index = 0 ; index < this->size ; index++) 
             this->arr[index] = other.arr[index]; 
    } 
    Array& operator=(const Array &other)
    {
        //1.free previous memory (this->arr)
        delete[] this->arr; 
        //deep copy 
        //1.copy the size 
        this->size = other.size; 
        //2.Allocate the memory 
        this->arr = new int[this->size]; 
        //3.Copy the contents; 
        for(int index = 0 ; index < this->size ; index++) 
          this->arr[index] = other.arr[index]; 
        return *this; 
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
    Array a1(5); 
    a1.accept( ); 
    a1.display( ); 
    
    Array a2(3); // this : a2  other : a1 
    a2.copy(a1); 
    a2.display( ); 


    Array a3 = a1 ; 
    a3.display( ); 
    
    Array a4(3); 
    a4 = a1; //a4.operator=(a1); 
    a4.display( ); 
    return 0;
}
