// https://codeforces.com/problemset/problem/734/A

#include <iostream>
#include <string>

using namespace std;

int main(){
    int n; 
    cin>>n;
    string games; 
    cin>>games;
    
    int anton_score = 0, danik_score = 0;
    
    for(char c:games){
        if(c == 'A')++anton_score;
        if(c == 'D') ++danik_score;
    }
    
    if(anton_score > danik_score)cout<<"Anton\n";
    if(danik_score > anton_score)cout<<"Danik\n";   
    if(danik_score == anton_score)cout<<"Friendship\n";
    
}