#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, m; cin >> n >> m;
    long long a[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m / 2; j++){
            swap(a[i][j], a[i][m - j - 1]);
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}