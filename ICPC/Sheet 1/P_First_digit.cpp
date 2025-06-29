#include <bits/stdc++.h>
using namespace std;
int main () {
    long long x, x1;
    cin >> x;
    x1 = x / 1000;
    if (x1 % 2 == 0){
        cout << "EVEN" << endl;
    }
    else{
        cout << "ODD" << endl;
    }
    return 0;
}