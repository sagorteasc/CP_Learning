#include <bits/stdc++.h>
using namespace std;
int main () {
    char s; cin >> s;
    int n, x; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x;
        for (int i = 1; i <=x; i++){
            cout << s;
        }
        cout << endl;
    }
    return 0;
}