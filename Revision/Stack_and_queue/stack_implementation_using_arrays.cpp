#include <bits/stdc++.h>
using namespace std;

class stackImplementation_Arrays{
    int top;
    int st[10];

    public:
    stackImplementation_Arrays(){
        this->top = -1;
    }

    // push -> O(1)
    void new_push(int data){
        if(top >= 10){
            cout<<"stack overflow"<<endl;
            return;
        }
        else{
            top++;
            st[top] = data;
        }
        
    }

    // top -> O(1)
    int new_top(){
        if(top == -1){
            cout<<"stack is empty"<<endl;
            return -1;
        }

        return st[top];
    }

    // pop -> O(1)
    void new_pop(){
        if(top == -1){
            cout<<"stack underflow"<<endl;
            return;
        }
        top--;   
    }

    // size
    int new_size(){
        return top+1;
    }

};


int main() {
    return 0;
}