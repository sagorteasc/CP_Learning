#include <bits/stdc++.h>
using namespace std;
int main () {
    int n; cin >> n;
    if (n == 1){
        cout << 0;
    }
    else if (n == 2){
        cout << 1;
    }
    else{
        long long f = 0, f1 = 0, f2 = 1;
        for (int i = 3; i <= n; i++){
            f = f1 + f2;
            f1 = f2;
            f2 = f;
        }
        cout << f;
    }
    return 0;
}