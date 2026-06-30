#include<iostream> 
#include<cstdlib> 
using namespace std; 
int main()
{
    int **ptr = (int**)calloc(4, sizeof(int*)); 
    if(ptr!=NULL)
    {
        // ptr[0] = (int*) calloc(3 , sizeof(int));
        // ptr[1] = (int*) calloc(3 , sizeof(int)); 
        // ptr[2] = (int*) calloc(3 , sizeof(int));
        // ptr[3] = (int*) calloc(3 , sizeof(int));
        for(int index = 0 ; index < 4 ; index++)
        {
            ptr[index] = (int*)calloc(3 , sizeof(int)); 
        }
        for(int row = 0 ; row < 4 ; row ++ )
        {
            for(int col = 0 ; col < 3 ; col++)
            {
                cout<<"Enter ptr[ " << row << " ] [ " << col << "] : "; 
                cin>>ptr[row][col]; 
            }
        }
        for(int row = 0 ; row < 4 ; row ++ )
        {
            for(int col = 0 ; col < 3 ; col++)
            {
                cout<<ptr[row][col]<<" "; 
            }
            cout<<endl; 
        }
        // free(ptr[0]); 
        // free(ptr[1]);
        // free(ptr[2]);
        // free(ptr[3]);  
        for(int index = 0 ; index < 4 ; index++)
        {
            free(ptr[index]); // to avoid memory leakage 
            ptr[index] = NULL; //to avoid dangling pointer  
        } 
        free(ptr);  //to avoid memory leakage 
        ptr = NULL; // to avoid dangling pointer 
    }
    else 
     cout<<"Memory allocation failed"<<endl; 
    return 0;
}

int main4()
{
    int *ptr;
    //void calloc(size_t, size_t) 
    ptr = (int*)calloc( 3  , sizeof(int)); //12 bytes 
    if(ptr!=NULL)
    {
        ptr[0] = 10; 
        ptr[1] = 20; 
        ptr[2] = 30; 
        //ptr[3] = 40; // NOT OK 
        //ptr[4] = 50; // NOT OK 
        //void *__cdecl realloc(void *, size_t)
        ptr = (int*)realloc(ptr , 5 * sizeof(int)); 
        if(ptr!=NULL)
        {
            ptr[3] = 60; 
            ptr[4] = 70; 
            for(int index = 0 ; index < 5 ; index++)
                cout<<ptr[index]<<endl; 
            free(ptr); // to avoid memory leakage 
            ptr = NULL;// to avoid dangling pointer 
        }
        else 
          cout<<"Realloc failed"<<endl; 
    }
    else 
     cout<<"Memory allocation failed"<<endl; 
    return 0;
}

int main3()
{
    int *ptr;
    //void calloc(size_t, size_t) 
    ptr = (int*)calloc( 3  , sizeof(int)); //12 bytes 
    if(ptr!=NULL)
    {
        ptr[0] = 10; 
        ptr[1] = 20; 
        ptr[2] = 30; 
        for(int index = 0 ; index < 3 ; index++)
            cout<<ptr[index]<<endl; 
        free(ptr); // to avoid memory leakage 
        ptr = NULL;// to avoid dangling pointer 
    }
    else 
     cout<<"Memory allocation failed"<<endl; 
    return 0;
}
int main2()
{
    int *ptr; 
    ptr = (int*)malloc( 3  * sizeof(int)); //12 bytes 
    if(ptr!=NULL)
    {
        ptr[0] = 10; 
        ptr[1] = 20; 
        ptr[2] = 30; 
        for(int index = 0 ; index < 3 ; index++)
            cout<<ptr[index]<<endl; 
        free(ptr); // to avoid memory leakage 
        ptr = NULL;// to avoid dangling pointer 
    }
    else 
     cout<<"Memory allocation failed"<<endl; 
    return 0;
}

int main1()
{
    int *ptr; 
    //void * malloc(size_t)
    ptr = (int*)malloc(sizeof(int)); 
    if(ptr!=NULL)
    {
        *ptr = 500;
        cout<<"Value : "<<*ptr<<endl; 
        free(ptr); // To avoid memory leakage 
        ptr = NULL; // To avoid dangling pointer  
    }
    else 
     cout<<"Memory allocation Failed"<<endl; 
    return 0;
}
