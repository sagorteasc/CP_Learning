#include <bits/stdc++.h>
using namespace std;
int main () {
    int n; cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long max_num = a[0];
    long long min_num = a[0];
    for (int i = 0; i < n; i++){
            min_num = min(min_num, a[i]);
            max_num = max(max_num, a[i]);
        }
        for (int i = 0; i < n; i++){
            if (a[i] == min_num){
                a[i] = max_num;
            }
            else if (a[i] == max_num){
                a[i] = min_num;
            }
        }
        for (int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
    return 0;
}