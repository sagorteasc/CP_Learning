#include <bits/stdc++.h>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++){
            for (int j = i; j < n; j++){
                bool nondecreasing = true;
                for (int k = i; k < j; k++){
                    if (a[k] > a[k+1]){
                        nondecreasing = false;
                        break;
                    }
                }
                if (nondecreasing){
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}