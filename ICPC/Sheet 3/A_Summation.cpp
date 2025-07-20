#include <bits/stdc++.h>
using namespace std;
int main () {
    int n; cin >> n;
    long long a[n];
    long long sum = 0;
    for (int i = 0; i < n; i++){
        cin >> a[n];
        sum += a[n];
    }
    cout << abs(sum);
    return 0;
}