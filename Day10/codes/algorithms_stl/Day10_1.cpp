#include<iostream> 
#include<algorithm>
#include<vector>
using namespace std; 
void display(vector<int> v1)
{
    vector<int> :: iterator itr = v1.begin( ); 
    cout<<"Ele : "; 
    while(itr!=v1.end( ))
    {
        cout<<*itr<<", ";
        itr++; 
    }
}
int main()
{
    vector<int> v1; 
    v1.push_back(49); 
    v1.push_back(30);
    v1.push_back(5);
    v1.push_back(100);
    display(v1);  
    cout<<endl;   

    sort(v1.begin( ) , v1.end( )); 
    display(v1); 
    //reverse method 

    cout<<endl; 
    reverse(v1.begin( ) , v1.end( )); 
    display(v1);
    
    cout<<endl; 
    vector<int> :: iterator itr1 = max_element(v1.begin() , v1.end()); 
    cout<<"Max Element : "<<*itr1<<endl; 
    v1.push_back(30); 
    v1.push_back(30); 
    v1.push_back(10); 
    int cnt = count(v1.begin( ) , v1.end( ) , 30); 
    cout<<"Count : "<<cnt<<endl; 
    return 0;
}
