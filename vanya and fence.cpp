//https://codeforces.com/problemset/problem/677/A

#include<iostream>
#include<vector>

using namespace std;

int main(){
  
    int n, h, temp;
    cin>>n>>h;
  
    vector<int>heights, widths; 
  
    for(int i = 0; i<n; ++i){
        cin>>temp;
        heights.push_back(temp);
    }
  
    for(int i:heights){
        if(i>h){
            widths.push_back(2);
        }else{
            widths.push_back(1);
        }
    }
  
    int total_width_needed = 0;
  
    for(int i:widths){
        total_width_needed += i;
    }
    
    cout<<total_width_needed<<"\n";
  
}