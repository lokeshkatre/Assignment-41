#include<iostream>
#include<stack>
using namespace std;

void printStack(stack<int> s)
{
    if(s.empty())
    return ;
    
    int x=s.top();
    s.pop();
    cout<<x<<" ";
    printStack(s);
}
int main()
{
    stack<int> st;
    st.push(3);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    
    printStack(st);

}