#include <iostream>
#include <list>
using namespace std;

// no random access possible
int main()
{
    list<int> l;
    l.push_back(23);
    l.push_back(53);
    l.push_back(55);
    l.push_back(73);

    for (int i : l)
        cout << i << " ";
    cout << endl;
    l.erase(l.begin());
    for (int i : l)
        cout << i << " ";

    return 0;
}