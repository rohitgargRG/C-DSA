#include<bits/stdc++.h>
using namespace std;

int main(){

    // BRUTE FORCE - 
    // iterate from 1 to n
    // print values that are divisible by n
    
    /*
    int n = 36;

    for(int i = 1; i <= n ;i++){
        if(n % i == 0) cout<<i<<" ";
    }

    */


    // Optimal Solution
    // iterate from 1 to sqrt(n)
    // print values that are divisible by n
    // also print n/i , since that will be other divisor.
    int n = 36;
    // we can also use i <= sqrt(n)
    // using i*i <= n is preferred because sqrt is an stl function , which will end up taking some time complexity.
    for(int i = 1 ; i*i <= n ; i++){
        if(n % i == 0){
            cout<<i<<" ";
            if(n/i != i) cout<<n/i<<" ";  // this condition is to handle the case when i = sqrt(n) , at that time it will print i two times, but we need print it only once.
        } 
        
    }
    return 0;
}