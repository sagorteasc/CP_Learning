#include <bits/stdc++.h>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        long long max_num;
        for (int i = 0; i < n; i++){
            max_num = a[i];
            for (int j = i; j < n; j++){
                max_num = max(max_num, a[j]);
                cout << max_num << " ";
            }
        }
        cout << endl;
    }
    return 0;
}