#include <iostream>
using namespace std;

class Stack
{
    int a[100];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    ~Stack()
    {
        top = -1;
    }
    void push(int value)
    {
        if (stackIsFull())
            cout << "Overflow" << endl;
        else
        {
            top++;
            a[top] = value;
        }
    }
    int stackEmpty()
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int stackIsFull()
    {
        if (top == 99)
            return 1;
        else
            return 0;
    }

    void pop()
    {
        if (stackEmpty())
        {
            cout << "underflow" << endl;
            return ;
        }
        else
            top--;
    }

    void printStack()
    {
        if (stackEmpty())
            return;
        else
        {
            int x = a[top--];
            cout << x << " ";
            printStack();
        }
    }
};
int main()
{
    Stack s;
    s.push(3);
    s.push(5);
    s.push(4);

    s.printStack();
    cout<<endl;
    s.push(3);
    s.push(5);
    s.push(4);
    s.pop();
    s.pop();
    s.pop();

    if (s.stackEmpty())
        cout << "\nStack is empty " << endl;
    else
        cout << "\nStack is not empty" << endl;
}
