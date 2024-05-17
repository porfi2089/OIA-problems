#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    long long n;
    vector<long long> v;
    cin >> n;
    v.resize(n);

    for (int i = 0; i < n-1; i++) {
        cin >> v[i];
        if (v[i] == 0) {
            v[i] = INT_MAX;
        }
    }
    sort(v.begin(), v.end());
    for (int i = v[0]; i < v[0]+n+1; i++) {
        if (v[i] != i) {
            cout << i << endl;
            break;
        }
    }
}
