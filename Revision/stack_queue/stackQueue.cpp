#include <bits/stdc++.h>
using namespace std;

// stack using queue
class stackQueue{
    public:
    queue<int> q;

    // push - O(n)
    void push(int data){
        if(q.empty()){
            q.push(data);
        }
        else{
            // push and reverse earlier ones
            int sz = q.size();
            q.push(data);

            for(int i = 0; i < sz;  i++){
                q.push(q.front());
                q.pop();
            }
        }
    }

    // pop -> o(1)
    void pop(){
        if(q.empty()){
            cout<<"queue is empty"<<endl;
            return;
        }
        q.pop();
    }

    // top -> O(1)
    int new_top(){
        return q.front();
    }

    // size -> O(1)
    int size(){
        return q.size();
    }
};
int main() {
    stackQueue st;

    st.push(100);
    st.push(200);
    st.push(300);
    st.push(400);

    cout<<st.size()<<endl;
    cout<<st.new_top()<<endl;

    st.pop();
    st.pop();

    cout<<st.size()<<endl;
    cout<<st.new_top()<<endl;

    return 0;
}