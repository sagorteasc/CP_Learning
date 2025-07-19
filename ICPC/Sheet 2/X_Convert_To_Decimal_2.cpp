#include <bits/stdc++.h>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int k = __builtin_popcount(n); // 1s count
        int result = (1u << k) - 1;
        cout << result << endl;
    }
    return 0;
}