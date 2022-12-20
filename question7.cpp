#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
stack<int> sort(stack<int> &s)
{
    stack<int> s2;
    while(!s.empty()){
        int x = s.top();
        s.pop();
        while(!s2.empty() && s2.top()>x)
        {
            s.push(s2.top());
            s2.pop();
        }
        s2.push(x);
    }
    return s2;
}
int main()
{
    stack<int> stack1;
    stack1.push(13);
    stack1.push(21);
    stack1.push(34);
    stack1.push(14);
    stack1.push(51);

    stack1= sort(stack1);
    while(!stack1.empty())
    {
        cout<<stack1.top()<<" ";
        stack1.pop();
    }

}