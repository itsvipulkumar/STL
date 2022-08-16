#include <iostream>
#include <deque>
using namespace std;
int main()
{

    deque<int> a;

    cout << a.size() << endl;
    cout << a.max_size() << endl;

    a.push_back(12);
    a.push_back(62);
    a.push_back(42);
    a.push_back(14);

    for (int i : a)
        cout << i << " ";
    cout << endl;
    for (auto i = a.begin(); i != a.end(); ++i)
        cout << *i << " ";

    cout << a.size() << endl;
    cout << a.max_size() << endl;

    a.erase(a.begin(), a.begin() + 1);

    for (auto i = a.begin(); i != a.end(); ++i)
        cout << *i << " ";

    return 0;
}