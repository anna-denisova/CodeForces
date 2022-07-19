//https://codeforces.com/problemset/problem/1626/A

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void run(){
    string a, b;
    cin>>a;
    sort(a.begin(), a.end());
    b = a;
    cout<<b<<"\n";
}

int main(){
    int t; 
    cin>>t;

    for(int i = 0; i<t; ++i){
        run();
    }

    return 0;

}