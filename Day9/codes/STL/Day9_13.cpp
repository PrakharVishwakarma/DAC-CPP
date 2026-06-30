#include<iostream> 
#include<map> 
using namespace std; 
int main()
{
    map<string,string> contacts; 
    contacts["Ketan"] = "8805822402"; 
    contacts["Nilesh"] = "8805892240";
    contacts["Aditya"] = "8804892402";
    contacts["Rajiv"] = "8804822402"; 
    
    string name , contact; 
    cout<<"Enter the name : "; 
    cin>>name; 
    contact = contacts[name]; 
    cout<<contact<<endl; 
    return 0;
}
