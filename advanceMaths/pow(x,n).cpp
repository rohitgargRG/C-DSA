# include<bits/stdc++.h>
using namespace std;

// approach 1 : Brute force
double pow_brute_force(int& x, int& n){
        double ans = 1.0;
        
        if(n == 0) return double(1);
        
        for(int i = 1 ; i < abs(n) ; i++){
            ans *= x;
        }

        ans *= x;

        if(n < 0) return double(1/ans);
        
        return ans;
}

// approach 2 : optimal solution
double pow_optimal_solution(int& x, int& n){
        double ans = 1.0;
        
        if(n == 0) return double(1);
        int n1 = abs(n);
        while(n1 > 0){
            // if power is odd
            if(n1%2 == 1){
                ans *= x;
                n1--;
            }
            else{  // power is even
                n1 /= 2;
                x *= x;
            }
        }

        if(n < 0) return double(1/ans);

        return ans;
}

int main(){
    int n = 2;
    int x = 21;

    return 0;
}