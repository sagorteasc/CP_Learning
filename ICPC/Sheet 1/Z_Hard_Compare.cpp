#include <bits/stdc++.h>
using namespace std;
int main () {
    double a, b, c, d, pow1, pow2; cin >> a >> b >> c >> d;
    pow1 = b*log(a);
    pow2 = d*log(c);
    if (pow1 > pow2){
        cout << "YES";
    }
    else if (pow1 <= pow2){
        cout << "NO";
    }
    return 0;
}