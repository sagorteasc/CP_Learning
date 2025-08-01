#include <bits/stdc++.h>
using namespace std;
int main () {
    int n; cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int op = 0;
    bool even = true;
    while (even){
        for (int i = 0; i < n; i++){
            if (a[i] % 2 != 0){
                even = false;
                break;
            }
        }
        if (even){
            for (int i = 0; i < n; i++){
                a[i] /= 2;
            }
            op++;
        }
    }
    cout << op << endl;
    return 0;
}