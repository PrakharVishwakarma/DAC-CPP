#include<iostream> 

using namespace std; 
//typedef is used to create the alias for existing data type (class / structure)
//where-as reference is used to create alias of existing object(not for constant literal)  
void swap(int &x , int &y)
{
    int temp = x; 
    x = y; 
    y = temp; 
}
int main()
{
    int a = 10 , b = 20; 
    swap(a,b);  
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;  
    return 0;
}

int main7()
{
    //int &num1;  // NOT OK 
    //int &num1 = NULL; // NOT OK 
    //int &num1 = 20; 
    int num1 = 10; 
    int &num2 = num1; 
    //int * const num2 = &num1; 
    return 0;
}

int main6()
{
    int num1 = 10; 
    int num2 = 20; 
    int &num3 = num2; 
    num3++; 
    cout<<"num1 : "<<num1<<" "<<&num1<<endl; 
    cout<<"num2 : "<<num2<<" "<<&num2<<endl; 
    cout<<"num3 : "<<num3<<" "<<&num3<<endl; 
    return 0;
}

int main5()
{
    int num1 = 10; //referent 
    int &num2 = num1; // reference 
    int &num3 = num2; // reference 
    ++num1; 
    ++num2; 
    ++num3; 
    cout<<"num1 : "<<num1<<" "<<&num1<<endl; 
    cout<<"num2 : "<<num2<<" "<<&num2<<endl; 
    cout<<"num3 : "<<num2<<" "<<&num3<<endl; 
    return 0;
}
int main4()
{
    int num1 = 10; //referent 
    int &num2 = num1; // reference 
    int &num3 = num1; // reference 
    ++num1; 
    ++num2; 
    ++num3; 
    cout<<"num1 : "<<num1<<" "<<&num1<<endl; 
    cout<<"num2 : "<<num2<<" "<<&num2<<endl; 
    cout<<"num2 : "<<num2<<" "<<&num3<<endl; 
    return 0;
}

int main3()
{
    int num1 = 10; //referent 
    int &num2 = num1; // reference 
    ++num1; 
    ++num2; 
    cout<<"num1 : "<<num1<<" "<<&num1<<endl; 
    cout<<"num2 : "<<num2<<" "<<&num2<<endl; 
    return 0;
}
int main2()
{
    int num1 = 10; //referent 
    int &num2 = num1; // reference 
    cout<<"num1 : "<<num1<<" "<<&num1<<endl; 
    cout<<"num2 : "<<num2<<" "<<&num2<<endl; 
    return 0;
}

int main1()
{
    int num1 = 10; 
    int num2 = num1; 
    cout<<"num1 : "<<num1<<" "<<&num1<<endl; 
    cout<<"num2 : "<<num2<<" "<<&num2<<endl; 
    return 0;
}
