#include <iostream>
#include <queue>
using namespace std;

void print(queue<int> q)
{
    cout<<"[";
    while(!q.empty()){
        cout<<" "<<q.front();
        q.pop();
    }
    cout<<" ]\n";
}

int main()
{
    queue<int> q;
    print(q); // [ ]

    q.push(10);
    print(q); // [ 10 ]

    q.push(20);
    print(q); // [ 10 20 ]

    q.push(30);
    print(q); // [ 10 20 30 ]

    cout<<"q.front() : "<<q.front()<<"\n"; // q.front() : 10

    if(!q.empty()){
        cout<<"q.empty() == false\n"; // "q.empty() == false"
    }

    q.pop();
    print(q); // [ 20 30 ]

    q.pop();
    print(q); // [ 30 ]

    q.pop();
    print(q); // [ ]

    if(q.empty()){
        cout<<"q.empty() == true\n"; // "q.empty() == true"
    }

    return 0;
}