#include <bits/stdc++.h>
using namespace std;

//algo
// start moving from right to left (end of string)
// if operand is encountered , push into the stack
// if operator is encountered , then pop top two elements of stack
// and push top1 + top2 + operator into stack
// fianlly return TOS

string prefix_to_postfix(string s){
    int n = s.size();
    int i = n-1;
    stack<string> st;

    while(i >= 0){
        // case 1 - if opreand
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
            st.push(string(1,s[i]));
        }
        else{
            // operator
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();

            string temp = t1 + t2 + s[i];
            st.push(temp);
        }
        i--;
    }

    return st.top();
}
int main() {
    string prefix = "/-AB*+DEF";
    cout<<prefix_to_postfix(prefix)<<endl;
    return 0;
}