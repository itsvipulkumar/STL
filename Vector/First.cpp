#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    cout << vec.capacity(); // capacity

    // push back()
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(7);
    vec.push_back(9);
    vec.push_back(19);

    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(7);
    vec.push_back(9);

    // for (int i = 0; i < vec.size(); i++)
    //     cout << vec.at(i) << " \n";
    // cout << "capacity : "<<vec.capacity()<<endl; // capacity
    // cout << "Size : "<<vec.size(); // capacity

    //  pop back()
    vec.pop_back();

    for (int i : vec)
        cout << i << " ";
    cout << endl;

    vector<int> a(5, 1); // this is->sizw of vector is 5 and will initialize as 1
    cout << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> next(a); // copying the vector
    for (int j : next)
    {
        cout << j << " ";
    }
    cout << endl;

    return 0;
}