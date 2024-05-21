#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cstring>

using namespace std;


int Calc_diagonal(int n){
    return(1 + n * (n+1));
}

int main() {
    int t;
    cin >> t;
    vector<vector<int>> pos;
    for(int i = 0; i < t; i++){
        cin >> pos[i][0];
        cin >> pos[i][1];
    }
    vector<int> sol;
    for(int i = 0; i < t; i++){
        int x = pos[i][1] - 1;
        int y = pos[i][0] - 1;
        int C = Calc_diagonal(max(x, y));
        if(x < y){
            if(y%2 == 0){
                sol.push_back(C - (y - x));
            }else{
                sol.push_back(C + (y - x));
            }
        }else if(x > y){
            if(x%2 == 0){
                sol.push_back(C - (x - y));
            }else{
                sol.push_back(C + (x - y));
            }
        }else{
            sol.push_back(C);
        }
    }
    for(auto x : sol){
                cout << x << " ";
    }
}

