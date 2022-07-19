//https://codeforces.com/problemset/problem/1353/B

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int run(){
    int n, k;
    cin >> n >> k;
    vector<int> a, b;
    for (int i = 0; i < n; ++i){ //fill a
        int temp_a;
        cin >> temp_a;
        a.push_back(temp_a);
    }
    for (int i = 0; i < n; ++i){ //fill b 
        int temp_b;
        cin >> temp_b;
        b.push_back(temp_b); 
    }
    //----------------------------
    int return_sum = 0;
    int new_sum = 0;
    //----------------------------
    //is k 0?
    if (k == 0){
        for (int v : a){
            return_sum += v;
        }
        return return_sum;
    }
    //----------------------------
    //is n 1?
    if(n == 1){
        return max(a[0], b[0]);
    }
    //----------------------------
    //maybe the initial array is best?
    for(int v:a){
        return_sum += v;
    }
    //----------------------------
    for (int i = 0; i < k; ++i){
        sort(a.begin(), a.end()); //ascending        takes the first element from each array
        sort(b.rbegin(), b.rend()); //descending 
        //........................
        int temp_a = a[0]; //swap values 
        a[0] = b[0];
        b[0] = temp_a;
        //........................
        // count answer
        new_sum = 0;
        for (int v : a){
            new_sum += v;
        }
        if (new_sum < return_sum){
            return return_sum;
        }else {
            return_sum = new_sum;
        }
        //........................
    }
    return return_sum;
}

int main(){
    int t;
    cin >> t;
    vector<int> sums;
    for (int i = 0; i < t; ++i){
        int temp_ans = run();
        sums.push_back(temp_ans);
    }
    //print all answers at the end after all inputs 
    for (int ans : sums) {
        cout << ans << "\n";
    }
}