//https://codeforces.com/problemset/problem/1325/B

#include<iostream>
#include <vector>
#include<set>

using namespace std;

void run(){
    int n;
    cin>>n;
    set<int>a;
    for(int i = 0; i<n; ++i){
        int in;
        cin>>in;
        a.insert(in);
    }
    cout<<a.size()<<"\n";
}

int main(){
    int tc;
    cin>>tc;
    for(int t = 0; t<tc; ++t){
        run();
    }
}