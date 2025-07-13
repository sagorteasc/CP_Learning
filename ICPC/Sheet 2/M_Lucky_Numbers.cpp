#include <bits/stdc++.h>
using namespace std;
int main () {
    long long a, b, temp; cin >> a >> b;
    bool found = false;
    for (int i = a; i <= b; i++){
        temp = i;
        bool lucky = true;
        while (temp > 0){
            int digit = temp % 10;
            if (digit != 4 && digit != 7){
                lucky = false;
                break;
            }
            temp = temp / 10;
        }
        if (lucky){
            if (found){
                cout << " ";
            }
            cout << i;
            found = true;
        }
    }
    if (!found){
            cout << "-1";
        }
    return 0;
}