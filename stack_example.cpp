#include <iostream>
#include <stack>
using namespace std;

void print(stack<int> st)
{
    cout<<"[";
    while(!st.empty()){
        cout<<" "<<st.top();
        st.pop();
    }
    cout<<" ]\n";
}

int main()
{
    stack<int> st;
    print(st); // [ ]

    st.push(10);
    print(st); // [ 10 ]

    st.push(20);
    print(st); // [ 20 10 ]

    st.push(30);
    print(st); // [ 30 20 10 ]

    cout<<"st.top() : "<<st.top()<<"\n"; // s.top() : 30

    if(!st.empty()){
        cout<<"st.empty() == false\n"; // "st.empty() == false"
    }

    st.pop();
    print(st); // [ 20 10 ]

    st.pop();
    print(st); // [ 10 ]

    st.pop();
    print(st); // [ ]

    if(st.empty()){
        cout<<"st.empty() == true\n"; // "st.empty() == true"
    }

    return 0;
}