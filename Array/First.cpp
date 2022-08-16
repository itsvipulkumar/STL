#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 5> arr = {1, 3, 5, 6, 7}; // static array no more use in SL
    int size = arr.size();
    cout << size << " "; // size of array

    cout << "Element at index "
         << "4"
         << " is  " << arr.at(4) << endl;

    cout << "The front elements : " << arr.front() << endl;
    cout << "The front elements : " << arr.end() << endl;
    cout << "The front elements : " << arr.back() << endl;

    
    return 0;
}