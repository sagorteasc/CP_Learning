#include <bits/stdc++.h>
using namespace std;
int main () {
    long long a, b, c; cin >> a >> b >> c;
    long long d = a, e = b, f = c;
    if (a > b){
        swap (a, b);
    }
    if (b > c){
        swap (b, c);
    }
    if (a > b){
        swap (a, b);
    }
    cout << a << endl << b << endl << c << endl << endl;
    cout << d << endl << e << endl << f << endl;
    return 0;
}