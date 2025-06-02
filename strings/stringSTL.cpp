#include <bits/stdc++.h>
using namespace std;

int main() {

    // taking input
    string s1;
    getline(cin,s1);
    cout<<s1<<endl;

    // substring method -> TC = O(k) , k -> length of substring.
    cout<<s1.substr(2,5)<<endl;
    // returns string starting from index 2 and is of length 5

    // find a substring in string -> TC = O(n*m) , m-> length of substring
    auto pos = s1.find("garg");
    cout<<pos<<endl;
    // returns starting index of substring in the string.

    // replacing substring
    // s.replace(start_idx , length_of_substr , subtring_to_replace)
    // TC - O(n + m)
    // n -> no of characters being removed
    // m -> no of characters being inserted
    s1.replace(17,8,"hockey");
    cout<<s1<<endl;

    // erasing a character/substring
    // s.erase(start_index , no_of characters to erase) , TC = O(n)
    s1.erase(6,4); // start from index 6 and erase next 4 characters
    cout<<s1<<endl;

    // inserting a substring
    // s.insert(start_index , string_to insert);
    // TC = O(n+m) , n = no of characters after start_index , m = no of characters to insert.
    s1.insert(0,"start : ");
    cout<<s1<<endl;

    // reverse a string , TC = O(n)
    reverse(s1.begin(),s1.end());
    cout<<s1<<endl;

    // iterators

    for(auto it = s1.begin() ; it != s1.end() ; it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    //convert string to char array , TC - O(1)
    const char* cstr = s1.c_str();
    cout<<cstr<<endl;

    // convert char array to string
    string str(cstr);

    // string to integer
    string s2 = "1000";
    int num = stoi(s2);
    cout<<num<<endl;

    // string to long
    long num1 = stol(s2);
    cout<<num1<<endl;

    // string to long long
    long long num2 = stoll(s2);
    cout<<num2<<endl;

    // integer to string
    double a = 100.100;
    // int a = 100.100;
    // long long a = 100.100;
    string temp = to_string(a);
    cout<<temp<<endl;

    // NOTE - we use to_string() only when the given qty is in int,long,long long,double,etc.
    return 0;
}