#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cstring>

using namespace std;

int main() {
    char n[10000005];
    cin >> n;
    int L = (int) strlen(n);
    char prev = n[0];
    int count = 1;
    int max_count = 1;
    for (int i = 1; i < L+1; i++) {
        if(n[i] == prev) {
            count++;
            max_count = max(max_count, count);
        } else {
            count = 1;
        }
        prev = n[i];
    }
    
    cout << max_count << endl;
}
