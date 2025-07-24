#include <bits/stdc++.h>
using namespace std;
int main () {
    long long n; cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    bool palindrome = true;
    for (int i = 0; i < n/2; i++){
        if (a[i] != a[n - 1 -i]){
            palindrome = false;
            break;
        }
    }
    cout << (palindrome ? "YES" : "NO");
    return 0;
}