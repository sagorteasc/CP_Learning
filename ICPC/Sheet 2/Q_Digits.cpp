#include <bits/stdc++.h>
using namespace std;
int main () {
    int t; cin >> t;
    long long n;
    for (int i = 0; i < t; i++){
        cin >> n;
        string s = to_string (n);
        reverse (s.begin(), s.end());
        for (int j = 0; j < s.length(); j++){
            cout << s[j] << " ";
        }
        cout << endl;
    }
    return 0;
}