#include<iostream> 
#include<map>
using namespace std; 

int main()
{
    //roll(int) , marks(double)
    map<int,double> m; 
    m[3] = 44.55;
    m[10] = 33.22; 
    m[11] = 66.66; 
    m[56] = 33.22; // duplicate values are allowed 
    m[12] = 66.66; 
    m[10] = 13.33; // previous value will be override with new value  
    
    /*
    //I/p - Roll and print marks 
    int roll; 
    double marks; 
    cout<<"Enter the roll Number : "; 
    cin>>roll; 
    marks = m[roll]; 
    cout<<"Marks : "<<marks<<endl; 
    */ 

    map<int,double> :: iterator  itr = m.begin( ); 
    while(itr!=m.end( ))
    {
        cout<<itr->first<<"->"<<itr->second<<endl; 
        itr++; 
    }
    return 0;
}
