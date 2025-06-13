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
// algorithm - 
// s1 - reverse the infix string
// s2 - find its postfix.
// s3 - reverse the answer.

// NOTE - we can push similar priority elements into stack.
string infix_to_prefix(string s){
    int n = s.size();
    int i = 0;
    string ans = "";

    // reverse
    reverse(s.begin(),s.end());

    // put brackets correctly
    for(int i = 0; i < n; i++){
        if(s[i] == '(') s[i] = ')';
        else if(s[i] == ')') s[i] = '(';
    }

    // find postfix
    stack<char> st;

    while(i < n){
        // case 1 - s[i] is an alphabet/digit
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
            ans += s[i];
        }
        // case 2 - s[i] is opening bracket
        else if(s[i] == '('){
            st.push(s[i]);
        }
        // case 3 - s[i] is closing bracket
        else if(s[i] == ')'){
            while(st.top() != '('){
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        // case 4 - it is an operator
        else{
            if(s[i] == '^'){  // no same priority case
                while(!st.empty() && (priority(s[i]) <= priority(st.top()))){
                    ans += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            else{
                while(!st.empty() && (priority(s[i]) < priority(st.top()))){
                    ans += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            
        }
        i++;
    }

    // push the remaining elements
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }

    // reverse the answer
    reverse(ans.begin(),ans.end());

    return ans;
}
int main() {
    string infix = "(A+B)*C-D+F";

    cout<<infix_to_prefix(infix)<<endl;
    return 0;
}