#include<iostream> 
#include<cstring>
using namespace std; 

#define SIZE 3
template<typename T> 
class Array 
{
    private: 
    T arr[SIZE];
    public: 
    Array( void )
    {
        memset(arr,0,sizeof(arr)); 
    }
    T get(int index)
    {
        if(index < 0 || index >= SIZE)
           cout<<"Invlid index"; 
        return arr[index]; 
    } 
    void set(int index , T value)
    {
        if(index < 0 || index >= SIZE)
           cout<<"Invlid index"; 
        arr[index] = value; 
    }
}; 
int main()
{
    //Array<int> a1; 
    Array<double> a1; 
    for(int i = 0 ; i < SIZE ; i++)
    {
        a1.set(i,i * 1.1); 
    }
    for(int i = 0 ; i < SIZE ; i++)
    {
        cout<<a1.get(i)<<endl; 
    }
    return 0;
}

