#include <bits/stdc++.h>
using namespace std;
int main () {
    int n; cin >> n;
    string a;
    cin >> a;
    long long sum = 0;
    for (int i = 0; i < n; i++){
        sum += a[i] - '0';
    }
    cout << sum;
    return 0;
}