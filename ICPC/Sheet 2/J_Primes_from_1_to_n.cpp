#include <bits/stdc++.h>
using namespace std;
int main () {
    long long n; cin >> n;
    bool prime = true;
    for  (int i = 2; i <= n; i++){
        prime = true;
        for (int j = 2; j < i; j++){
            if (i % j == 0){
                prime = false;
                break;
            }
        }
        if (prime){
            cout << i << " ";
        }
    }
    return 0;
}