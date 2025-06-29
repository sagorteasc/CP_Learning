#include <bits/stdc++.h>
using namespace std;
int main () {
    long long x, years, months, days;
    cin >> x;
    years = x / 365;
    cout << years << " years" << endl;
    months = (x % 365) / 30;
    cout << months << " months" << endl;
    days = (x % 365) % 30;
    cout << days << " days" << endl;
    return 0;
}