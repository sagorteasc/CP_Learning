#include <bits/stdc++.h>
using namespace std;
int main () {
    int n; cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        if (a[i] > 0){
            cout << "1 ";
        }
        if (a[i] < 0){
            cout << "2 ";
        }
        if (a[i] == 0){
            cout << "0 ";
        }
    }
    return 0;
}