#include<iostream>
#include<stack>
#include<string>
using namespace std;
string reverseString(string str)
{
    stack<char> s;
    string temp;
    for(int i=0;i<str.size();i++)
    {
        s.push(str[i]);
    }
    while(!s.empty())
    {
        temp=temp+s.top();
        s.pop();
    }
    return temp;
}
int main()
{

    string s;
    cout<<"Enter string:"<<endl;
    getline(cin,s);

    s= reverseString(s);
    cout<<s;
}