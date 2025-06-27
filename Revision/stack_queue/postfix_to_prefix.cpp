#include <bits/stdc++.h>
using namespace std;
// postfix to prefix

// algo
// start moving from left to right
// if operator is encountered , then pop top two elements of stack
// and push operator + TOS2 + TOS1 into stack.
// finally return TOS.
string postfix_to_prefix(string s){
    int n = s.size();
    int i = 0;
    stack<string> st;

    while(i < n){
        // if operand
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
            st.push(string(1,s[i]));
        }
        else{
            //operator
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();

            string temp = s[i] + t2+t1;
            st.push(temp);
        }
        i++;
    }

    return st.top();
}
int main() {
    string postfix = "AB-DE+F*/";
    cout<<postfix_to_prefix(postfix)<<endl;
    return 0;
}