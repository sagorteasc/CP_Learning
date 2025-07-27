#include <bits/stdc++.h>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--){
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        long long min = LLONG_MAX;
        for (int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++){
                long long result = a[i] + a[j] + j - i;
                if (result < min || min == 0){
                    min = result;
                }
            }
        }
        cout << min << endl;
    }
    return 0;
}