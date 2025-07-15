#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, m;
    while (cin >> n >> m){
        if (n <= 0 || m <= 0){
            break;
        }
        int maximum = max(n, m);
        int minimum = min(n, m);
        int sum = 0;
        for (int i = minimum; i <= maximum; i++){
            sum += i;
        }
        for (int i = minimum; i <= maximum; i++){
            cout << i << " ";
        }
        cout << "sum =" << sum << endl;
    }
    return 0;
}