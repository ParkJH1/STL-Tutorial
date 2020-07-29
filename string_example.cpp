#include <iostream>
#include <string>
using namespace std;

int main()
{
    // vector<char> s
    string s;

    cout<<s<<"\n"; // ""

    s.push_back('a');
    cout<<s<<"\n"; // "a"

    s.push_back('b');
    cout<<s<<"\n"; // "ab"

    s.push_back('c');
    cout<<s<<"\n"; // "abc"

    cout<<"s.size() : "<<s.size()<<"\n"; // s.size() : 3
    
    for(int i=0; i<s.size(); i++){
        cout<<s[i]<<"\n";
    }
    /*
    a
    b
    c
    */

    if(s=="abc"){
        cout<<"s == abc\n"; // "s == abc"
    }
    if(s>"abb"){
        cout<<"s > abc\n"; // "s > abb"
    }

    s.pop_back();
    cout<<s<<"\n"; // "ab"

    s.pop_back();
    cout<<s<<"\n"; // "a"

    s.pop_back();
    cout<<s<<"\n"; // ""

    return 0;
}