#include <bits/stdc++.h>
using namespace std;
int main () {
    int n; cin >> n;
    int freq[26] = {0};
    char s;
    for (int i = 0; i < n; i++){
        cin >> s;
        freq[s - 'a']++;
    }
    for (int i = 0; i < 26; i++){
        while (freq[i]--){
            cout << (char)(i + 'a');
        }
    }
}