#include<iostream> 
using namespace std;
int main()
{
    int arr[3] = {10,20,30}; 
    int (&arr1)[3] = arr;  // reference to an array 
    for(int index = 0 ; index < 3 ; index++)
        cout<<arr1[index]<<endl; 
    return 0;
}
 
int main1()
{
    int num = 10; 
    int *p1 = &num; 
    int *&p2 = p1;  //reference to a pointer is possible 
    //cout<<&num<<endl; 
    //cout<<p1<<endl; 
    //cout<<p2<<endl; 

    cout<<*p1<<endl; 
    cout<<*p2<<endl; 
    return 0;
}
