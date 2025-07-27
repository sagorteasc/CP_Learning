#include <bits/stdc++.h>
using namespace std;
int main () {
    int n; cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long min = *min_element (a, a + n);
    int count = 0;
    for (int i = 0; i < n; i++){
        if (a[i] == min){
            count++;
        }
    }
    if (count & 1){
        cout << "Lucky";
    }
    else{
        cout << "Unlucky";
    }
    return 0;
}