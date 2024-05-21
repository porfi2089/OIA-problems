#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cstring>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> sol;

    if(n <= 3 && n != 1){
        cout << "NO SOLUTION";
    }else if(n == 1){
        cout << n; 
    }else{
        if(n == 4){
            sol = {2, 4, 1, 3};
        }else if(n == 5){
            sol = {5, 2, 4, 1, 3};
        }else if(n%2 == 0){
            for(int i = 1; i <= n/2; i++){
                sol.push_back(i);
                sol.push_back(i+n/2);
            }
        }else if(n%2 == 1){
            sol.push_back(n);
            for(int i = 1; i <= (n-1)/2; i++){
                sol.push_back(i);
                sol.push_back(i+n/2);
            }
        }
        for(auto x : sol){
                cout << x << " ";
            }
    }
}
