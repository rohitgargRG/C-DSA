#include <bits/stdc++.h>
using namespace std;

class a{
    // 8 bytes -> greedy alignment
    // int a;
    // char b;
    // char c;

    // 12 bytes; -> not optimal
    char a;
    int b;
    char c;
};
int main() {
    a obj;
    cout<<sizeof(obj)<<endl;
    return 0;
}