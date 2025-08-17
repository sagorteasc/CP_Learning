#include <bits/stdc++.h>
using namespace std;
int main () {
    int t; cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
            if (s.find("010") == -1 && s.find("101") == -1){
                cout << "Bad" << endl;
            }
            else{
                cout << "Good" << endl;
            }
    }
    return 0;
}