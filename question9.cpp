#include <iostream>
#include <stack>
using namespace std;

string current_url = "";
stack<string> backward_url;
stack<string> forward_url;

void new_url(string url)
{
    if (current_url != "")
    {
        backward_url.push(current_url);
    }
    current_url = url;
}

void forward()
{
    if (forward_url.empty() || current_url == forward_url.top())
    {
        cout << "Not Available\n";
        return;
    }
    else
    {
        backward_url.push(current_url);
        current_url = forward_url.top();
        forward_url.pop();
    }
}
void backward()
{
    if (backward_url.empty() || current_url == backward_url.top())
    {
        cout << "Not available" << endl;
        return;
    }
    else
    {
        forward_url.push(current_url);
        current_url = backward_url.top();
        backward_url.pop();
    }
}

void workingSite()
{
    string url = "lokeshkatre.com";
    new_url(url);
    cout << "Current url is : " << current_url << endl;

    url = "google.com";
    new_url(url);
    cout << "Current url is : " << current_url << endl;

    url = "youtube.com";
    new_url(url);
    cout << "Current url is : " << current_url << endl;

    backward();
    cout << "Current url is : " << current_url << endl;

    forward();
    cout << "Current url is : " << current_url << endl;

    forward();
    cout << "Current url is : " << current_url << endl;

    backward();
    cout << "Current url is : " << current_url << endl;

    backward();
    cout << "Current url is : " << current_url << endl;

    backward();
    cout << "Current url is : " << current_url << endl;
}

int main()
{
    workingSite();
}
