#include <bits/stdc++.h>
using namespace std;
int main () {
    int t, n; cin >> t;
    while (t--){
    cin >> n;
    long long result = 1;
    for (int i = 1; i <= n; i++){
        result = result * i;
    }
    cout << result << endl;
    }
    return 0;
}