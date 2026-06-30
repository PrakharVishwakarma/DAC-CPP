#include<iostream> 
#include<vector>
using namespace std; 

int main()
{
    vector<int> v1; 
    v1.push_back(10); 
    v1.push_back(20); 
    v1.push_back(30); 
    v1.push_back(40); 

    cout<<"FWD traversing : "; 
    vector<int> :: iterator itr1 = v1.begin( ); 
    while(itr1!=v1.end( ))
    {
        cout<<*itr1<<", "; 
        itr1++; 
    } 
    cout<<endl; 
    cout<<"REV traversing "; 
    vector<int> :: iterator itr2 = v1.end( );//pointing to next of last element  
    while(itr2!= v1.begin( ))
    {
        itr2--; 
        cout<<*itr2<<", "; 
    }
    cout<<endl; 
    cout<<"REV traversing using reverse_iterator   "; 
    vector<int> :: reverse_iterator itr3 = v1.rbegin( ); 
    while(itr3!=v1.rend( ))
    {
         cout<<*itr3<<", "; 
         itr3++; 
    }
    cout<<endl; 
    vector<int> :: iterator itr4 = v1.begin( ); 
    while(itr4!=v1.end( ))
    {
        *itr4 = *itr4 + 10; 
        itr4++; 
    }
    cout<<"Modified ele : "; 
    itr1 = v1.begin( ); 
    while(itr1!=v1.end( ))
    {
        cout<<*itr1<<", "; 
        itr1++; 
    } 
    cout<<endl; 
    cout<<"Const Iterator :"; 
    vector<int> :: const_iterator itr5 = v1.cbegin(); 
    while(itr5!= v1.end()) 
    {
        cout<<*itr5<<" ,";
        itr5++; 
    }
    return 0;
}
