#include <bits/stdc++.h>
using namespace std;
int main () {
    int n; cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int primary = 0, secondary = 0, total = 0;
    for (int i = 0; i < n; i++){
        primary += a[i][i];
        secondary += a[i] [n - i - 1];

    }
    total = abs (primary - secondary);
    cout << total << endl;
    return 0;
}