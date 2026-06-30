#include<iostream> 
using namespace std; 

class Chair 
{
    private: 
    int height; 
    int weight; 
    static int price; 
    public:
    Chair(int height , int weight)
    {
        this->height = height; 
        this->weight = weight; 
    } 
    static void setPrice( int price)
    {
        Chair::price = price; 
    } 
    static int getPrice( void )
    {
        return Chair::price; 
    }
    void printRecord( void  )
    {
        cout<<"Height : "<<this->height<<endl; 
        cout<<"Weight : "<<this->weight<<endl; 
        cout<<"Price : "<<Chair::price<<endl; 
    }
}; 
int Chair :: price = 500; 

int main()
{
    Chair c1(10,20); 
    c1.printRecord( );//10 20 500  
    Chair::setPrice(1000); 

    cout<<"Updated Price : "<<Chair::getPrice( );
    return 0;
}
