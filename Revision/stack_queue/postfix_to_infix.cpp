#include <bits/stdc++.h>
using namespace std;

// potfix to infix
// algo 
// if operand is encountered , push into stack
// if operator is encountered , pop top two elements of stack
// put operator between those two elements and apply ( at starting and  ) at end and push back into stack.
// at the end TOS will be answer
string postfix_to_infix(string s){
    int n = s.size();
    int i = 0;
    
    stack<string> st;  // *****************

    while(i < n){
        // case1 - if character is an alphabet
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
            st.push(string(1,s[i]));
        }
        // s[i] is an operator
        else{
            // pop topw two elements of stack and push after modificaion
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();
            string temp = '(' + t2 + s[i] + t1 +')';
            st.push(temp);
        }
        i++;
    }

    return st.top();
}
int main() {
    string postfix = "AB-DE+F*/";
    cout<<postfix_to_infix(postfix)<<endl;
    return 0;
}