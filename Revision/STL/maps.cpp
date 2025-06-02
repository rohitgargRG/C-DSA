#include <bits/stdc++.h>
using namespace std;

int main() {

    // syntax

    // ordered_map
    map<char,int> mpp;

    // insert
    mpp['a'] = 1;
    mpp['b'] = 2;
    mpp['c'] = 3;

    // create a pair and insert
    mpp.insert(make_pair('d',4));
    mpp.insert(pair<char,int>('e',5));
    mpp.insert(pair<char,int>({'f',6}));
    mpp.insert({'g',7});

    // print
    auto it = mpp.begin();

    while(it != mpp.end()){
        cout<<it->first<<" : "<<it->second<<endl;
        it++;
    }

    // size()
    cout<<mpp.size()<<endl;

    // copying a map into another map

    map<char,int> mpp1(mpp.begin() , mpp.end());

    // erase()
    mpp.erase('c');

    auto it1 = mpp1.begin();

    while(it1 != mpp1.end()){
        cout<<it1->first<<" : "<<it1->second<<endl;
        it1++;
    }

    // erasing key:val pointed by an iterator
    auto it2 = mpp.find('d');

    mpp.erase(it2);


    // lower_bound and upper_bound
    cout<<"lower and upper bound : "<<endl;

    auto lower = mpp.lower_bound('d');

    // for(auto it = mpp.begin();  it != mpp.end() ; it++){
    //     cout<<(*it).first<<" : "<<(*it).second<<endl;
    // }
    cout<<(*lower).first<<" : " <<(*lower).second<<endl;

    auto upper = mpp.upper_bound('f');

    cout<<(*upper).first<<" : "<<(*upper).second<<endl;

    // unordered_map
    cout<<"unordered_map : "<<endl;

    unordered_map<int,int> mpp3;

    mpp3[1] = 1;
    mpp3[2] = 2;
    mpp3[3] = 3;

    for(auto it = mpp3.begin();  it != mpp3.end() ; it++){
        cout<<(*it).first<<" : "<<(*it).second<<endl;
    }

    cout<<mpp3.count(1)<<" "<<mpp3.count(4)<<endl;

    // multimap

    multimap<int,int> mpp4;

    // mpp4[1] = 1; -> error
    mpp4.insert({1,1});
    mpp4.insert({2,2});
    mpp4.insert({3,3});
    mpp4.insert({1,4});
    mpp4.insert({2,5});

    auto itr = mpp4.begin();

    while(itr != mpp4.end()){
        cout<<itr->first<<" : "<<itr->second<<endl;
        itr++;
    }

    cout<<mpp4.count(1)<<endl;

    auto range = mpp4.equal_range(1);

    for(auto it = range.first ; it != range.second ; it++){
        cout<<it->first<<" : "<<it->second<<endl;
    }
    

    




    return 0;
}