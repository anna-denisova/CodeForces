//https://codeforces.com/problemset/problem/1180/A

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>r(n+1);
    r[0] = 0;
    r[1] = 1;

    for(int i = 2; i<=n; ++i){
        r[i] = r[i-1] + (i-1)*4;
    }

    cout<<r[n]<<"\n";
}
