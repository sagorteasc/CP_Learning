#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;  cin >> n;
    long long x, max;
    cin >> max;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (max < x){
            max = x;
        }
    }
    cout << max;
    return 0;
}   