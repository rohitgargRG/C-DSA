#include <bits/stdc++.h>
using namespace std;

// note - size of array has to be known to implement Stack_using_array overflow , functionality.
class Stack_using_array{
    int top;
    int arr[10];

    public:
    Stack_using_array(){
        this->top = -1;
    }

    // push -> O(1)
    void push(int data){
        if(top >= 9){
            cout<<"Stack overflow"<<endl;
            return;
        }
        top++;
        arr[top] = data;
    }

    // pop() -> o(1)
    void pop(){
        if(top == -1){
            cout<<"Stack underflow"<<endl;
            return;
        }
        top--;
    }

    // top() -> O(1)
    int new_top(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }

    // size
    int size(){
        return top+1;
    }
};
int main() {
    // Stack using array
    Stack_using_array st;

    st.push(100);
    st.push(200);
    st.push(300);
    st.push(400);
    st.push(100);
    st.push(200);
    st.push(300);
    st.push(400);
    st.push(100);
    st.push(200);
    st.push(300);
    st.push(400);

    cout<<st.new_top()<<endl;
    cout<<st.size()<<endl;

    st.pop();
    st.pop();

    cout<<st.new_top()<<endl;
    cout<<st.size()<<endl;

    return 0;
}