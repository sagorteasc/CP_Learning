#include <bits/stdc++.h>
using namespace std;
int main () {
    char x, x1, x2;
    cin >> x;
    if (x >= 'a' && x <= 'z'){
        x1 = x - 32;
        cout << x1;
    }
    else if (x >= 'A' && x <= 'Z'){
        x2 = x + 32;
        cout << x2;
    }
    return 0;
}