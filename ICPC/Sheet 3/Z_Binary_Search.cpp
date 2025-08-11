#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, q; cin >> n >> q;
    vector<long long> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort (a.begin(), a.end());
    while (q--){
        int x; cin >> x;
        bool found = false;
        int beg = 0, end = n - 1;
        while (beg <= end){
            int mid = (beg + end) / 2;
            if (a[mid] == x){
                found = true;
                break;
            }
            else if (a[mid] > x){
                end = mid - 1;
            }
            else{
                beg = mid + 1;
            }
        }
        if (found){
            cout << "found" << endl;
        }
        else{
            cout << "not found" << endl;
        }
    }
    return 0;
}