#include <bits/stdc++.h>
using namespace std;

int main() {

    // initialization

    // 1 -> using a list
    vector<int> v1({10,20,30,40,50});

    for(auto i : v1){
        cout<<i<<" ";
    }
    cout<<endl;

    // 2 -> initialization using a single value
    vector<int> v2(5,100);

    for(auto i : v2){
        cout<<i<<" ";
    }
    cout<<endl;

    // 3 -> copying one vector into another

    vector<int> v3(v1);

    for(auto i : v3){
        cout<<i<<" ";
    }
    cout<<endl;

    // iterators

    vector<int> v4({1,2,3,4,5,6,7,8});

    for(auto i = v4.begin() ; i < v4.end() ; i++){
        cout<<*i<<" ";
    }
    cout<<endl;

    for(auto i = v4.rbegin() ; i != v4.rend() ; i++){

        cout<<*i<<" ";
    }
    cout<<endl;

    // constant iterator

    auto i = v4.begin();
    *i = 100;    // -> no problem
    cout<<v4[0]<<endl;

    // auto j = v4.cbegin();
    // *j = 1; // -> error (since we cannnot modify constant values)

    for(auto i = v4.cbegin() ; i < v4.cend() ; i++){
        cout<<*i<<" ";
    }
    cout<<endl;

    // vector methods

    // size()
    cout<<v4.size()<<endl;

    // max_size()
    cout<<v4.max_size()<<endl;
    cout<<v1.max_size()<<endl;

    // capacity()
    v4.push_back(100);
    cout<<v4.capacity()<<endl;
    cout<<v1.capacity()<<endl;

    // resize
    v4.resize(5);
    cout<<v4[7]<<endl; //-> no error
    // cout<<v4.at(7)<<endl; // -> out of range error

    //Bound checking refers to the process of verifying that an index used to access elements in an array or container (like std::vector) is within valid limits — i.e., not going outside the size of the container.

    // empty()
    cout<<v4.empty()<<endl;

    cout<<v4.size()<<endl;
    cout<<v4.capacity()<<endl;

    v4.shrink_to_fit();

    cout<<v4.size()<<endl;
    cout<<v4.capacity()<<endl;

    // memory access methods

    cout<<v4[2]<<endl;
    cout<<v4.at(2)<<endl;

    cout<<v4.front()<<endl;
    cout<<v4.back()<<endl;

    // modifiers

    vector<int> v5({1,2,3,4,5,6,7});

    // assign()
    v5.assign(5,1000); // removes everything from v5 and makes v5 of size 5 with all values 1000.

    v5.assign(v5.begin() , v5.begin()+2);
    cout<<v5.size()<<endl;

    // push_back() and pop_back()
    v5.push_back(100);
    v5.push_back(200);
    v5.push_back(300);
    v5.push_back(400);

    v5.pop_back();

    // insert()
    
    // insert at a specific posn
    v5.insert(v5.begin()+2 , -1); // insert after 2nd index

    // insert a specific element multiple times after a location
    v5.insert(v5.begin()+2,3,-2); 

    // inserting a range
    vector<int> temp(5,500);

    v5.insert(v5.begin()+2 , temp.begin()+1,temp.end()-1);

    // erase()

    // erase from a posn
    v5[4] = -9;
    v5.erase(v5.begin()+3); // delete element at 3rd index;

    // erasing a range
    v5.erase(v5.begin()+3 , v5.begin()+7); // excludes last index

    for(auto i : v5){
        cout<<i<<" ";
    }
    cout<<endl;

    // swap two vectors
    vector<int> v6({1,2,3});
    vector<int> v7({4,5,6});

    v6.swap(v7);

    // delete a vector
    v6.clear();

    return 0;
}