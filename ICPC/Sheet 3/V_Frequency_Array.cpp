#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, m; cin >> n >> m;
    vector <int> a(m + 1, 0);
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a[x]++;
    }
    for (int i = 1; i <= m; i++){
        cout << a[i] << endl;
    }
    return 0;
}