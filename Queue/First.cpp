#include <iostream>
#include <queue>
using namespace std;
int main()
{
    cout << "First queue : " << endl;
    queue<int> q;
    q.push(12);
    q.push(82);
    q.push(52);
    q.push(16);
    q.push(14);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    cout << "Second queue : " << endl;

    queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(5);
    cout << endl;

    while (!q1.empty())
    {
        cout << q1.front() << " ";
        q1.pop();
    }
    cout << endl;

    cout << "After Swap: " << endl;

    q.swap(q1);
    cout << "First Queue Swap: " << endl;
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    cout << "FiSecond rst Queue Swap: " << endl;
    while (!q1.empty())
    {
        cout << q1.front() << " ";
        q1.pop();
    }
    cout << endl;
    // q.empty();

    // cout << "After Emplty ! " << endl;
    // while (!q.empty())
    // {
    //     cout << q.front() << " ";
    //     q.pop();
    // }

    return 0;
}