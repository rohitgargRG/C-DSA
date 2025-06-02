#include <bits/stdc++.h>
using namespace std;

int main() {

    // taking input
    string s1;
    getline(cin , s1);
    cout<<s1<<endl;

    // stringstream
    // print words in a string individually

    // create object
    stringstream obj(s1);

    // create a string to store words individually
    string temp;

    // print individual words
    while(obj >> temp){
        cout<<temp<<endl;
    }

    // methods

    // substr
    string s2 = "iAmRohitGargRG";

    // substr(start_index , length)
    cout<<s2.substr(0,5)<<endl;
    cout<<s2.substr(2,5)<<endl;

    // finding a substring
    size_t pos = s2.find("Rohit");  // returns starting index of substring if present
    cout<<pos<<endl;

    auto p = s2.find("Rohit");
    cout<<p<<endl;

    // if subtstring is not present , then it returns a gargbage value

    // we can check if a subtring is present in the string or not
    if(p < s2.size()) cout<<"present"<<endl;
    else cout<<"not present"<<endl;

    // replacing a substring
    // s.replace(start_index , length , string_to_replace)
    s2.replace(3 , 5 , "RG");
    cout<<s2<<endl;

    // erasing a character or a substring

    // s2.erase(start_index , length_of_substring_to_erase)
    s2.erase(3,2);
    cout<<s2<<endl;

    s2.erase('G');
    cout<<s2<<endl;
    

    return 0;
}