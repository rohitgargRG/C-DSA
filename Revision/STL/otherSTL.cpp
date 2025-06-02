#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {10,20,30,22,11,50,45};

    int mini = *min_element(arr.begin() , arr.end());

    cout<<mini<<endl;

    int maxi = *max_element(arr.begin(),arr.end());

    cout<<maxi<<endl;

    int arr1[] = {100,200,40,67,30};
    int *i;
    i = min_element(arr1 , arr1+5);

    cout<<*i<<endl;

    // find min max in a range
    int min_range = *min_element(arr.begin()+1 , arr.begin()+4);  // exclude index 4

    cout<<min_range<<endl;

    int max_range = *max_element(arr.begin()+1 , arr.begin()+5);

    cout<<max_range<<endl;

    // __builtin_popcount()

    int num = 7;

    int ones = __builtin_popcount(num);
    cout<<ones<<endl;

    long long nums = 16;

    int one = __builtin_popcountll(nums);
    cout<<one<<endl;

    // next_permutation()

    vector<int> v = {1,2,3};

    sort(v.begin(),v.end());

    do{
        for(auto i : v){
            cout<<i<<" ";
        }
        cout<<endl;
    }while(next_permutation(v.begin(),v.end()));
    return 0;
}