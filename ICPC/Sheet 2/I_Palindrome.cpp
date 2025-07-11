#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    int temp = n, sum = 0, rem;
    while (temp != 0){
        rem = temp % 10;
        sum = sum *10 + rem;
        temp = temp / 10;
    }
    cout << sum << endl;
    if (sum == n){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}