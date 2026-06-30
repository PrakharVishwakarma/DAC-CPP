#include<iostream> 
#include<list> 
using namespace std; 
/*
    -push_back() -- add ele at the end 
    -push_front() -- add ele at the start 
*/
int main()
{
    list<int> l1; 
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    l1.push_back(50);
    l1.push_back(100); 
    cout<<"size : "<<l1.size( )<<endl;  

    list<int> :: iterator itr = l1.begin( ); 
    while(itr!=l1.end( ))
    {
        cout<<*itr<<" , "; 
        itr++;  
    }
    cout<<endl; 
    //pop_front , pop_back(removing first and last element) 
    l1.pop_front( ); //remove 10 
    l1.pop_back( );  //remove 50 
    l1.remove(100); 
    itr = l1.begin( ); 
    while(itr!=l1.end( ))
    {
        cout<<*itr<<" , "; 
        itr++;  
    }
    return 0;
}
