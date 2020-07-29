#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &v)
{
    cout<<"[";
    for(int vv : v) cout<<" "<<vv;
    cout<<" ]\n";
}

int main()
{
    vector<int> v;
    print(v); // [ ]

    v.push_back(10);
    print(v); // [ 10 ]

    v.push_back(20);
    print(v); // [ 10 20 ]

    v.push_back(30);
    print(v); // [ 10 20 30 ]

    cout<<"v.size() : "<<v.size()<<"\n"; // v.size() : 3
    
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<"\n";
    }
    /*
    10
    20
    30
    */

    v.pop_back();
    print(v); // [ 10 20 ]

    v.pop_back();
    print(v); // [ 10 ]

    v.pop_back();
    print(v); // [ ]

    return 0;
}