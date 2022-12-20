#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
stack<int> copy(stack<int> stack1){
    vector<int> v;
    stack<int> stack2;
    while(!stack1.empty())
    {
        v.push_back(stack1.top());
        stack1.pop();
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        stack1.push(v[i]);
        stack2.push(v[i]);
    }
    return stack2;
}

int main()
{
    stack<int> stack1,stack2;
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    stack1.push(4);
    stack1.push(5);
    stack2=copy(stack1);
    while(!stack1.empty()){
        cout<<stack1.top()<<" ";
        stack1.pop();
    }
    cout<<endl;
    while(!stack2.empty()){
        cout<<stack2.top()<<" ";
        stack2.pop();
    }
    cout<<endl;
}