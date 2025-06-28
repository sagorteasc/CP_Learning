#include <bits/stdc++.h>
using namespace std;
int main () {
    long long a, b;
    char s;
    cin >> a >> s >> b;
    switch(s){
        case '+': {
            cout << a + b;
            break;
        }
        case '-': {
            cout << a - b;
            break;
        }
        case '*': {
            cout << a * b;
            break;
        }
        case '/': {
            if (b != 0){
                cout << a / b;
            }
            break;
        }
        default: {
            cout << 0;
        }
    }
    return 0;
}