#include <bits/stdc++.h>
using namespace std;
int main () {
    string s; cin >> s;
    map<char, int> count;
    for (char c : s){
        count[c]++;
    }
    for (auto& x : count){
        cout << x.first << " : " << x.second << endl;
    }
}