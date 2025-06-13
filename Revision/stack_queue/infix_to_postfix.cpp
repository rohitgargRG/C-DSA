#include <bits/stdc++.h>
using namespace std;
int priority(char ch){
    unordered_map<char,int> mpp;
    mpp['^'] = 3;
    mpp['*'] = 2;
    mpp['/'] = 2;
    mpp['+'] = 1;
    mpp['-'] = 1;

    return mpp[ch];
}
string infix_to_postfix(string& infix){
    int i = 0;
    int n = infix.size();
    string ans = "";
    stack<char> st;

    // create a stack

    while(i < n){
        // case 1 - if s[i] is and alphabet or digit
        if((infix[i] >= 'A' && infix[i] <= 'Z') || (infix[i] >= 'a' && infix[i] <= 'z') || (infix[i] >= '0' && infix[i] <= '9')){
            // directly add to answer
            ans += infix[i];
        }
        // case 2 - if s[i] is opening bracket
        else if(infix[i] == '('){
            // push into stack
            st.push(infix[i]);
        }
        // case 3 - if s[i] is a closing bracket
        else if(infix[i] == ')'){
            // pop all elements from top of stack till '('.
            while(st.top() != '('){
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        // case 4 - s[i] is an operator. (^,*,/,+,-)
        else{
            // if current operator has higher priority than the operator at TOS , then we can directly push it into the stack.
            // else we need to pop the lower/equal priority elements from TOS , and push those into the answer.
            while(!st.empty() && (priority(infix[i]) <= priority(st.top()))){
                ans += st.top();
                st.pop();
            }
            st.push(infix[i]);
        }
        i++;
    }

    // push the remaining elements into the stack
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }

    return ans;
}
int main() {
    string infix = "a+b*(c^d-e)";

    cout<<infix_to_postfix(infix)<<endl;
    return 0;
}