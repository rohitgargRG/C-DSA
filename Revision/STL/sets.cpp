#include <bits/stdc++.h>
using namespace std;

bool comp(int a , int b){
    return a > b;
}
int main() {

    // basics

    set<int> s1 = {100,200,100,24,54,678,24};

    for(auto i : s1){
        cout<<i<<" ";
    }
    cout<<endl;

    set<string> s2;

    s2.insert("rohit");
    s2.insert("garg");
    s2.insert("cristiano");

    for(auto i : s2){
        cout<<i<<" ";
    }
    cout<<endl;

    // sort in decreasing order
    set<char,greater<char>> s3;

    s3.insert('A');
    s3.insert('a');
    s3.insert('C');
    s3.insert('d');

    for(auto i : s3){
        cout<<i<<" ";
    }
    cout<<endl;

    // sort using a comp
    set<int , bool(*)(int,int)> s4(comp);

    s4.insert(20);
    s4.insert(25);
    s4.insert(22);
    s4.insert(100);

    for(auto i : s4){
        cout<<i<<" ";
    }
    cout<<endl;

    // set operations
    cout<<"set operations : "<<endl;

    set<int> s5;

    // insert()
    s5.insert(100);
    s5.insert(200);
    s5.insert(150);
    s5.insert(300);

    // size()
    cout<<s5.size()<<endl;

    // max_size
    cout<<s5.max_size()<<endl;

    // empty()
    cout<<s5.empty()<<endl;

    // begin()
    auto it1 = s5.begin();
    cout<<*it1<<endl;

    // end()
    auto it2 = s5.end();
    it2--;
    cout<<*it2<<endl;

    // print set
    for(auto i : s5){
        cout<<i<<" ";
    }
    cout<<endl;

    // copy one set into another
    set<int,greater<int>> s6(s5.begin() , s5.end());

    set<int,greater<int>>:: iterator it;

    for(it = s6.begin() ; it != s6.end() ; it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    // find()
    auto itr = s6.find(200);

    // find posn/index of ele
    int pos = distance(s6.begin() , itr);
    cout<<pos<<endl;

    // count()
    cout<<s6.count(200)<<endl;
    s6.insert(1000);
    s6.insert(500);

    for(auto i : s6) cout<<i<<" ";
    cout<<endl;
    
    // lower_bound
    auto it3 = s1.lower_bound(100);
    int pos1 = distance(s1.begin() , it3);
    cout<<pos1<<endl;
    cout<<*it3<<endl;

    // upper_bound
    auto it4 = s1.upper_bound(200);
    cout<<*it4<<endl;
    cout<<distance(s1.begin() , it4)<<endl;

    // unordered_set

    unordered_set<int> s7;

    s7.insert(100);
    s7.insert(500);
    s7.insert(1000);
    s7.insert(200);
    s7.insert(150);

    for(auto i : s7){
        cout<<i<<" ";
    }
    cout<<endl;

    // s7.erase(s7.find(1000));

    cout<<s7.size()<<endl;
    cout<<s7.empty()<<endl;
    cout<<*(s7.find(1000))<<endl;
    cout<<s7.count(1000)<<endl;
    cout<<distance(s7.begin() , s7.find(1000))<<endl;

    s7.clear();

    cout<<s7.size()<<endl;


    // multiset
    cout<<"multiset"<<endl;

    multiset<int> ms;

    ms.insert(1);
    ms.insert(100);
    ms.insert(50);
    ms.insert(50);
    ms.insert(100);
    ms.insert(200);

    for(auto i : ms) cout<<i<<" ";
    cout<<endl;

    cout<<ms.size()<<endl;
    cout<<ms.empty()<<endl;
    cout<<*(ms.find(50))<<endl;
    cout<<ms.count(50)<<endl;
    cout<<ms.max_size()<<endl;

    auto it7 = ms.lower_bound(50);
    cout<<*it7<<endl;
    cout<<distance(ms.begin() , it7)<<endl;

    ms.erase(200);


    return 0;
}