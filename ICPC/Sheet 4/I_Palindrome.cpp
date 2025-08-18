#include <bits/stdc++.h>
using namespace std;
int main () {
    string s; cin >> s;
    bool palindrom = true;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == s[s.length() - 1 - i]){
            continue;
        }
        else{
            palindrom = false;
            break;
        }
    }
    if (palindrom){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}