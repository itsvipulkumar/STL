#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> max; // max heap
    max.push(12);
    max.push(22);
    max.push(32);
    max.push(42);

    int n = max.size();
    for (int i = 0; i < n; i++)
    {
        cout << max.top() << " ";
        max.pop();
    }
    cout << endl;
    priority_queue<int, vector<int>, greater<int>> min; // min heap
 
    min.push(12);
    min.push(22);
    min.push(32);
    min.push(42);

    int n1 = min.size();
    for (int i = 0; i < n1; i++)
    {
        cout << min.top() << " ";
        min.pop();
    }

    return 0;
}