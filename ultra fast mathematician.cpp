//https://codeforces.com/problemset/problem/61/A

#include<iostream>

using namespace std;

int main(){
    string a, b;
    cin>>a>>b;
    
    for(int i = 0; i<a.size(); ++i){
        if(a[i] == '1' && b[i] == '0'){
            cout<<"1";
        }else if(b[i] == '1' && a[i] == '0'){
            cout<<"1";
        }else{
            cout<<"0";
        }
    }
    cout<<"\n";
}