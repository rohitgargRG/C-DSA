#include <bits/stdc++.h>
using namespace std;

int main() {
    // STL 
    stack<int> st;

    // push
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // size
    cout<<st.size()<<endl;

    // top
    cout<<st.top()<<endl;

    //pop
    st.pop();
    st.pop();

    cout<<st.top()<<" "<<st.size()<<endl;

    // empty()
    cout<<st.empty()<<endl;

    // swap
    stack<int> s1;

    s1.push(1000);

    s1.swap(st);

    cout<<s1.top()<<" "<<st.top()<<endl;

    return 0;
}