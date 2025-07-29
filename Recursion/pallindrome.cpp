#include <bits/stdc++.h>
using namespace std;

bool check_pallindrome(int i, int n,string s){
    if(i >= n/2){
        return true;
    }

    // check
    if(s[i] != s[n-i-1])return false;
    return check_pallindrome(i+1 ,n, s);
}
int main() {
    string s = "MADAM";
    cout<<check_pallindrome(0,s.size(),s);
    return 0;
}