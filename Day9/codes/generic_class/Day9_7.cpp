#include <iostream>
using namespace std;
class StackOverflowException
{
private:
    string message;

public:
    StackOverflowException(string message)
    {
        this->message = message;
    }
    string getMessage(void)
    {
        return this->message;
    }
};
class StackUnderFlowException
{
private:
    string message;

public:
    StackUnderFlowException(string message)
    {
        this->message = message;
    }
    string getMessage(void)
    {
        return this->message;
    }
};
template<typename T> 
class stack
{
private:
    int size;
    T *arr;
    int top;

public:
    stack(int size)
    {
        this->size = size;
        this->arr = new T[this->size];
        this->top = -1;
    }
    bool is_full(void)
    {
        return this->top == this->size - 1;
    }
    bool is_empty(void)
    {
        return this->top == -1;
    }
    void push(T data)
    {
        if (this->is_full())
            throw StackOverflowException("Stack is Full");
        this->top++;
        this->arr[top] = data;
    }
    void pop(void)
    {
        if (this->is_empty())
            throw StackUnderFlowException("Stack is Empty");
        this->top--;
    }
    T peek(void)
    {
        if (this->is_empty())
            throw StackUnderFlowException("Stack is Empty");
        return this->arr[top];
    }
};
void acceptRecord(double &data)
{
    cout << "Enter the ele : ";
    cin >> data;
}
void printRecord(double data)
{
    cout << "Ele : " << data<<endl;
}
int menuList(void)
{
    int choice;
    cout << "0.Exit" << endl;
    cout << "1.Push" << endl;
    cout << "2.Pop" << endl;
    cout << "Enter the choice : ";
    cin >> choice;
    return choice;
}
int main()
{
    int choice;
    //stack<int> stk(5);
    stack<double> stk(5);
    double data;
    while ((choice = ::menuList()) != 0)
    {
        try
        {
            switch (choice)
            {
            case 1:
                ::acceptRecord(data);
                stk.push(data);
                break;
            case 2:
                data = stk.peek();
                printRecord(data);
                stk.pop();
            }
        }
        catch (StackOverflowException &ex)
        {
            cout<<ex.getMessage( )<<endl; 
        }
        catch(StackUnderFlowException &ex)
        {
            cout<<ex.getMessage( )<<endl; 
        }
    }
    return 0;
}
