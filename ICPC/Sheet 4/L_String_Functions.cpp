#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, q; cin >> n >> q;
    string s; cin >> s;
    int a, b;
    while(q--){
        string op; cin >> op;
        if (op == "substr"){
            cin >> a >> b;
            for (int i = min(a, b) - 1; i < max(a, b); i++){
                cout << s[i];
            }
            cout << endl;
        }
        else if (op == "pop_back"){
            s.pop_back();
        }
        else if (op == "front"){
            cout << s.front() << endl;
        }
        else if (op == "back"){
            cout << s.back() << endl;
        }
        else if (op == "sort"){
            cin >> a >> b;
            sort(s.begin() + min(a, b) - 1, s.begin() + max(a, b));
        }
        else if (op == "reverse"){
            cin >> a >> b;
            reverse(s.begin() + min(a, b) - 1, s.begin() + max(a, b));
        }
        else if (op == "print"){
            int pos; cin >> pos;
            cout << s[pos - 1] << endl;
        }
        else{
            char c; cin >> c;
            s.push_back(c);
        }
    }
    return 0;
}