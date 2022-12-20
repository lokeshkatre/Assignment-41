#include<iostream>
#include<stack>
using namespace std;


int main()
{
    stack<int> st;
    st.push(3);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    
    cout<<"top element:"<<st.top()<<endl;

}