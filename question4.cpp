
#include<iostream>
#include<stack>
#include<string>

using namespace std;

string reverse(string s)
{

    stack<string> st;
    string temp = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            st.push(temp);
            temp = "";
        }
        else
        {
            temp = temp + s[i];
        }
    }
    st.push(temp);
    s= "";
    while (!st.empty())
    {
        s=s+st.top();
        st.pop();
        s=s+" ";
    }
    return s;
    
}

int main()
{
    string s;
    cout<<"Enter string"<<endl;
    getline(cin,s);
    s = reverse(s);
    cout << s << endl;
    return 0;
}