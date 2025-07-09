#include <bits/stdc++.h>
using namespace std;
int main () {
    long long x; cin >> x;
    int count = 0;
    if (x == 2 || x == 3){
        cout << "YES";
    }
    else{
        for (int i = 2; i <= x/2; i++){
            if (x % i == 0){
                count = 1;
                break;
            }
        }
        if (count == 1){
            cout << "NO";
        }
        else{
            cout << "YES";
        }
    }
    return 0;
}