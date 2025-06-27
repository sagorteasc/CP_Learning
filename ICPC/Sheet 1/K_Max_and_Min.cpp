#include <bits/stdc++.h>
using namespace std;
int main () {
    long long a, b, c;
    cin >> a >> b >> c;
    if (a<=b && a<=c){
        cout << a ;
    }
    else if (b<=a && b<=c){
        cout << b ;
    }
    else if (c<=a && c<=b){
        cout << c ;
    }
    cout << " ";
    if (a>=b && a>=c){
        cout << a;
    }
    else if (b>=a && b>=c){
        cout << b;
    }
    else if (c>=a && c>=b){
        cout << c;
    }
    else if (a==b && b==c){
        cout << a  << a << endl;
    }
    return 0;
}