#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "rohit garg plays football garg in Nagpur";

    // rfind(pos,str) -> Finds last occurrence of str starting backward from pos.
    auto it = s.rfind("garg");
    cout<<it<<endl;

    // count no of particular characters in a string
    int cnt = count(s.begin(),s.end(), 'g');
    cout<<cnt<<endl;

    // transform
    transform(s.begin(),s.end(),s.begin(),::toupper);
    // transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;

    return 0;
}