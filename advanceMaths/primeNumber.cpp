#include<bits/stdc++.h>
using namespace std;
// Prime Number - No that are divisible by 1 and itself , and the total no of divisors are 2.
int main(){

    int n = 5;
    int cnt = 0;

    // BRUTE FORCE 
    // iterate rom 1 to n
    // if total no of divisors are 2 , then it is a prime no.
    /*
    for(int i = 1 ; i<=n ; i++){
        if(n%i == 0) cnt++;
    }

    if(cnt == 2) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    */

    // optimal approach
    // iterate from 1 to sqrt(n)
    // if you find one divisor d, than other divisor will be n/d;
    //tc -O(sqrt(n)) , sc - O(1)

    for(int i = 1 ; i*i <= n; i++){
        if(n%i == 0){
            cnt++;
            if(n/i != i) cnt++;
        }
        if(cnt > 2) break;
    }

    if(cnt == 2) cout<<"yes"<<endl;
    else cout<<"no"<<endl;

    return 0;
}