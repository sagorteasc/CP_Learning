#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, f = 0; cin >> n;
    int f1 = 0;
    int f2 = 1;
    for (int i = 0; i < n; i++){
        if (i == 0){
            cout << f1 << " ";
        }
        else if (i == 1){
            cout << f2 << " ";
        }
        else {
            f = f1  + f2;
            cout << f << " ";
            f1  = f2;
            f2 = f;
        }
    }
    return 0;
}