#include <bits/stdc++.h>
using namespace std;
int main () {
    int t; cin >> t;
    long long x, y;
    for (int i = 0; i < t; i++){
        long long sum = 0;
        cin >> x >> y;
        long long maximum = min(x, y) + 1;
        long long minimum = max(x, y) - 1;
        for (long long i = maximum; i <= minimum; i++){
            if (i % 2 != 0){
                sum += i;
            }
        }
        cout << sum << endl;
    }
    return 0;
}