// given a  number , print all prime factors till n.

# include<bits/stdc++.h>
using namespace std;

vector<int> seive(int& n){
    // create a vector of size n+1 initialised with 1.
    vector<int> prime(n+1 , 1);

    // start iterating from 2 to sqrt(n).
    for(int i = 2 ; i*i <= n ; i++){
        if(prime[i] == 1){  // if i is a prime number.
            for(int j = i*i ; j <= n ; j += i){ 
                // all the numbers which have i as it's factor can never be prime , so mark them 0 in the prime array.
                prime[j] = 0;
            }
        }
    }

    vector<int> ans;

    for(int i = 2 ; i <= n; i++){
        if(prime[i] == 1) ans.push_back(i);
    }

    return ans;
}

int main(){
    int n = 37;

    return 0;
}