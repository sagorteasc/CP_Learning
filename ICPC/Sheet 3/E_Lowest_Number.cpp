#include <bits/stdc++.h>
using namespace std;
int main () {
    int n; cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long min = a[0];
    int position = 0;
    for (int i = 1; i < n; i++){
        if (min > a[i]){
            min = a[i];
            position = i;
        }
    }
    cout << min << " " << position + 1;
    return 0;
}