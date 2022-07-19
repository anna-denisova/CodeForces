//https://codeforces.com/problemset/problem/492/A

#include <iostream>

using namespace std;

int main(){
    
    int total_cubes;
    cin>>total_cubes;
    
    int current_cubes = 0;
    
    int height = 0; 

    for(int i = 1; ; ++i){
        current_cubes += i;
        if(total_cubes < current_cubes){
            break;
        }
        height = i;
        total_cubes -= current_cubes;
    }
    
    cout<<height<<'\n';
    
    return 0;
}