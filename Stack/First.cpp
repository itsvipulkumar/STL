#include<iostream>
#include<stack>
using namespace std;
int main()
{
 stack<int> st;
 st.push(12);
 st.push(42);
 st.push(15);
 st.push(13);

 cout<<st.top()<<endl;
 cout<<st.size()<<endl;

while(!st.empty())
{
    cout<<st.top()<<" ";
    st.pop();
}
    return 0;
}