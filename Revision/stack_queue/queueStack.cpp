#include <bits/stdc++.h>
using namespace std;

// implement queue using stack
// two stacks are required
class queueStack{
    public:
    stack<int> s1,s2;
    // s1 -> main stack
    // s2 -> helper stack

    // push -> TC = O(n) , S - O(2n)

    // approach 1
    // push all elements of s1 -> s2
    // push x into s1.
    // push all elements of s2 into s1.
    void push(int data){
        // s1 -> s2
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }

        // push data into s1
        s1.push(data);

        // s2 -> s1
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    // pop() -> O(1)
    void pop(){
        if(s1.empty()){
            cout<<"queue is empty"<<endl;
            return;
        }
        s1.pop();
    }

    // front -> O(1)
    int new_front(){
        if(s1.empty()){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return s1.top();
    }

    // size -> O(1)
    int size(){
        return s1.size();
    }


};
int main() {
    queueStack q;

    q.push(100);
    q.push(200);
    q.push(300);
    q.push(400);

    cout<<q.size()<<endl;
    cout<<q.new_front()<<endl;

    q.pop();
    q.pop();

    cout<<q.size()<<endl;
    cout<<q.new_front()<<endl;

    return 0;
}