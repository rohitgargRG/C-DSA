#include <bits/stdc++.h>
using namespace std;

// approach - we will require 2 stacks
class queue_using_stacks{
    public:
    stack<int> s1;
    stack<int> s2;

    // push
    void new_push(int& data){
        // step 1 - (s1 -> s2)
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }

        // push data into s1
        s1.push(data);

        // step 3 - (s2 -> s1)
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    // top
    int new_top(){
        return s1.top();
    }

    void new_pop(){
        s1.pop();
    }
};

int main() {
    return 0;
}