#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

void NextGreaterElement(int arr[], int size)
{
    stack<int> s;
    s.push(arr[0]);
    cout << size << endl;
    for (int i = 1; i < size; i++)
    {
        if (s.empty())
        {
            s.push(arr[i]);
            continue;
        }

        while (!s.empty() && s.top() < arr[i])
        {
            cout << s.top() << "->" << arr[i] << endl;
            s.pop();
        }
        s.push(arr[i]);
    }
    while (!s.empty())
    {
        cout << s.top() << "->" << -1 << endl;
        s.pop();
    }
}
int main()
{
    int arr[] = {4, 5, 2, 25};
    int size = sizeof(arr) / sizeof(int);
    NextGreaterElement(arr, size);
}