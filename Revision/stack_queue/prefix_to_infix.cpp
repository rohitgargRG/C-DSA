#include <bits/stdc++.h>
using namespace std;

// algo
// 1) if character (A-Z , a-z , 0-9) is encountered , push into the stack
// 2) if operator is encountered , pop top two elements of stack
// push -> '(' + top1 + op + top2 + ')'  into the stack;
//return TOS at end
string prefix_to_infix(string s){
    int n = s.size();
    int i = n-1; 
    stack<string> st;

    while(i >= 0){
        //case 1 - if operand is encountered
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
            //push directly into the stack
            st.push(string(1,s[i]));
        }
        else{
            // operator is encountered
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();

            string temp = "(" + t1 + s[i] + t2 + ")";
            st.push(temp);
        }

        i--;
    }

    return st.top();
}
int main() {
    string prefix = "*+PQ-MN";
    cout<<prefix_to_infix(prefix)<<endl;
    return 0;
}