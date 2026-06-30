#include <iostream>
using namespace std;
class Time
{
private:
    int hrs;
    int mins;
    int secs;

public:
    //declaration 
    void input(void); 
    void display(void); 
    void setHrs(int hrs); 
    void setMins(int mins); 
    void setSecs(int secs);
    int getHrs(void); 
    int getMins(void); 
    int getSecs(void); 
    void inSecs(void); 
};
void Time ::  input(void)
{
    cout << "Enter hrs , mins , secs : ";
    cin >> hrs >> mins >> secs;
}
void Time ::  display(void)
{
    cout << hrs << ":" << mins << ":" << secs << endl;
}
void Time ::  setHrs(int hrs)
{
    this->hrs = hrs;
}
void Time ::  setMins(int mins)
{
    this->mins = mins;
}
void Time ::  setSecs(int secs)
{
    this->secs = secs;
}
int Time ::  getHrs(void)
{
    return this->hrs;
}
int Time ::  getMins(void)
{
    return this->mins;
}
int Time ::  getSecs(void)
{
    return this->secs;
}
void Time ::  inSecs(void)
{
    this->secs++;
    if (this->secs == 60)
    {
        this->secs = 0;
        this->mins++;
        if (this->mins == 60)
        {
            this->mins = 0;
            this->hrs++;
            if (this->hrs == 24)
            {
                this->hrs = 0;
            }
        }
    }
}
int main()
{
    Time t1;
    t1.setSecs(59);
    t1.setMins(59);
    t1.setHrs(22);
    t1.inSecs();
    t1.display();
    return 0;
}

int main3()
{
    Time t1;
    t1.setHrs(10);                             // t1.setHrs(&t1, 10);
    t1.setMins(12);                            // t1.setMins(&t1,12);
    t1.setSecs(20);                            // t1.setSecs(&t1,20);
    cout << "Hrs : " << t1.getHrs() << endl;   // 10
    cout << "Mins : " << t1.getMins() << endl; // 12
    cout << "Secs : " << t1.getSecs() << endl; // 20
    return 0;
}

int main2()
{
    Time t1;
    t1.setHrs(10);  // t1.setHrs(&t1, 10);
    t1.setMins(12); // t1.setMins(&t1,12);
    t1.setSecs(20); // t1.setSecs(&t1,20);
    t1.display();
    return 0;
}

int main1()
{
    Time t1;
    t1.input();   // t1.input(&t1);
    t1.display(); // t1.display(&t1);
    return 0;
}
