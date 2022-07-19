//https://codeforces.com/problemset/problem/1669/B

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int run(){

    int n; 
    cin>>n;
    vector<int>numbers;
    for(int i = 0; i<n; ++i){
        int in;
        cin>>in;
        numbers.push_back(in);
    }

    sort(numbers.begin(), numbers.end());

    for(int i = 0; i<n-2; ++i){
        //check if the current index is the same as the next 2
        if(numbers[i] == numbers[i+1] && numbers[i+1] == numbers[i+2]){
            return numbers[i];
        }
    }

    return -1;
}

int main(){
    int t; 
    cin>>t;
    vector<int> answers;

    for(int i = 0; i<t; ++i){
        int answer = run();
        answers.push_back(answer);
    }

    for(int a: answers){
        cout<<a<<'\n';
    }

    return 0;

}