//https://codeforces.com/problemset/problem/1690/C

#include<iostream>
#include<vector>

using namespace std;

void run(){
    int n;
    cin>>n;
    vector<int>s; //when task is given
    vector<int>f; //when task is finished
    vector<int>d; //duration
    int in; 
    for(int i = 0; i<n; ++i){
        cin>>in;
        s.push_back(in);
    }
    for(int i = 0; i<n; ++i){
        cin>>in;
        f.push_back(in);
    }

    //solve
    for(int i = 1; i<n; ++i){
        if(s[i] >= f[i-1]){
            //if start time is the same or greater than the last tasks end, then it is ok
        }else{
            s[i] += f[i-1] - s[i];    
        }
    }

    //find the durations
    for(int i = 0; i<n; ++i){
        d.push_back(f[i]-s[i]);
    }

    //cout
    for(auto a: d){
        cout<<a<<" ";
    }
    cout<<"\n";
}

int main(){
    int tc;
    cin>>tc;
    for(int t = 0; t<tc; ++t){
       run();
    }
    return 0;
}
