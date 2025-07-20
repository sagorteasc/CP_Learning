#include <bits/stdc++.h>
using namespace std;
int main () {
    int n; cin >> n;
    long long a[n], x;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> x;
    int position = -1;
    for (int i = 0; i < n; i++){
        if (a[i] == x){
            position = i;
            break;
        }
    }
    if (position == -1){
        cout << "-1";
    }
    else{
        cout << position;
    }
    return 0;
}