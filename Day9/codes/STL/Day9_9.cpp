#include<iostream> 
#include<vector>

using namespace std; 
//vector class (dynamic array with contigous memory allocation )
int main()
{
    vector<int> v1; 
    cout<<"size : "<<v1.size( )<<endl; 
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    cout<<"size : "<<v1.size( )<<endl; 
    //access element --  random acces 
    cout<<"v1[1] : "<<v1[1]<<endl; 
    //cout<<"v1[10] : "<<v1[10]<<endl; //Garbage 
    
    for(int i = 0 ; i < v1.size( ) ; i++)
    {
        cout<<v1[i]<<", "; 
    }
    cout<<endl; 
    vector<int> :: iterator itr = v1.begin( ); 
    while(itr!=v1.end())
    {
        cout<<*itr<<", "; 
        itr++; 
    }
    
    
    return 0;
}
