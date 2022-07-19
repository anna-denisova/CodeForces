//https://codeforces.com/problemset/problem/1676/B

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void run(){

    int n; //boxes
    cin>>n;
    vector<int>boxes;
    for(int i = 0; i<n; ++i){
        int in;
        cin>>in;
        boxes.push_back(in);
    }

    sort(boxes.begin(), boxes.end());
    int minimum = boxes[0]; //how many candies will have to be in each box
    int total_to_eat = 0;
    for(int c:boxes){
        total_to_eat += c-minimum;
    }

    cout<< total_to_eat<<"\n";

}

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; ++i){
        run();
    }
}