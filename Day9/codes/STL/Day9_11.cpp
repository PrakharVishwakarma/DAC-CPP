#include<iostream> 
#include<set> 
using namespace std; 

int main()
{
    set<int> s1;
    s1.insert(10); 
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);
    s1.insert(10);     

    cout<<"SET : "; 
    set<int> :: iterator itr = s1.begin( ); 
    while(itr!=s1.end( ))
    {
        cout<<*itr<<", "; 
        itr++; 
    }

    return 0;
}
