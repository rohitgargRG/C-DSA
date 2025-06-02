#include <bits/stdc++.h>
using namespace std;

class stackUsingQueue{
    public:
    queue<int> q;

    // push
    void new_push(int& data){
        if(q.empty()){
            q.push(data);
        }
        else{
            // push the element and reverse the queue
            int size = q.size();
            q.push(data);

            // reverse
            for(int i = 0; i < size ; i++){
                q.push(q.front());
                q.pop();
            }
        }
    }

    // pop
    void new_pop(){
        q.pop();
    }

    // top
    int new_top(){
        return q.front();
    }


};


int main() {
    return 0;
}