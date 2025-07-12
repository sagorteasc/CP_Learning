#include <bits/stdc++.h>
using namespace std;
int main () {
    long long a, b, a1, b1, rem; cin >> a >> b;
    a1 = a; b1 = b;
    while (b1 != 0){
        rem = a1%b1;
        a1 = b1;
        b1 = rem;
    }
    cout << a1;
    return 0;
}