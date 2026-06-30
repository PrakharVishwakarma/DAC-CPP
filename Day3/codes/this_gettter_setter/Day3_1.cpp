#include<iostream>
using namespace std; 
class Time 
{   
    private: 
    int hrs; 
    int mins; 
    int secs; 
    public: 
    void input( void )
    {
        cout<<"Enter hrs , mins , secs : "; 
        cin>>hrs>>mins>>secs; 
    }
    void display( void )
    {
        cout<<hrs<<":"<<mins<<":"<<secs<<endl; 
    }
    void setHrs(int hrs)
    {
        this->hrs = hrs; 
    }
    void setMins(int mins)
    {
        this->mins = mins; 
    }
    void setSecs(int secs)
    {
        this->secs = secs; 
    }
    int getHrs( void )
    {
        return this->hrs; 
    }
    int getMins( void )
    {
        return this->mins; 
    }
    int getSecs( void )
    {
        return this->secs; 
    }
    void inSecs( void )
    {
        this->secs++; 
        if(this->secs == 60)
        {
            this->secs = 0; 
            this->mins++; 
            if(this->mins == 60)
            {
                this->mins = 0; 
                this->hrs++; 
                if(this->hrs == 24)
                {
                    this->hrs = 0; 
                }
            }
        }
    }
}; 
int main()
{
    Time t1; 
    t1.setSecs(59); 
    t1.setMins(59); 
    t1.setHrs(22);
    t1.inSecs( );  
    t1.display( ); 
    return 0;
}

int main3()
{
     Time t1; 
    t1.setHrs(10); // t1.setHrs(&t1, 10);
    t1.setMins(12); //t1.setMins(&t1,12); 
    t1.setSecs(20); // t1.setSecs(&t1,20); 
    cout<<"Hrs : "<<t1.getHrs( )<<endl; //10 
    cout<<"Mins : "<<t1.getMins( )<<endl; //12
    cout<<"Secs : "<<t1.getSecs( )<<endl; //20 
    return 0;
}

int main2()
{
    Time t1; 
    t1.setHrs(10); // t1.setHrs(&t1, 10);
    t1.setMins(12); //t1.setMins(&t1,12); 
    t1.setSecs(20); // t1.setSecs(&t1,20);  
    t1.display( ); 
    return 0;
}

int main1()
{
    Time t1; 
    t1.input( ); // t1.input(&t1); 
    t1.display( ); // t1.display(&t1); 
    return 0;
}
