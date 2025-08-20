#include <bits/stdc++.h>
using namespace std;
int main () {
    int t; cin >> t;
    while(t--){
        string s, n; cin >> s >> n;
        string newS = "";
        int maxl = max(s.length(), n.length());
        for (int i = 0; i < maxl; i++){
            if (i < s.length()){
                newS += s[i];
            }
            if (i < n.length()){
                newS += n[i];
            }
        }
        cout << newS << endl;
    }   
    return 0;
}