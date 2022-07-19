//https://codeforces.com/problemset/problem/80/A

#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    vector<int>prime_nums {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

    auto n_pos = lower_bound(prime_nums.begin(), prime_nums.end(), n);
    int n_pos_index = n_pos - prime_nums.begin();

    if(prime_nums[n_pos_index+1] != m){
        cout<<"NO\n";
        return EXIT_SUCCESS;
    }

    cout<<"YES\n";
    return EXIT_SUCCESS;
}