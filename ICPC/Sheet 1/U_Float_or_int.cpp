#include <bits/stdc++.h>
using namespace std;
int main () {
   double n; cin >> n;
   long long integer = (long long)n;
   double decimal = n - integer;
   if (decimal < 1e-9){
    cout << "int " << integer << endl;
   }
   else{
    cout << "float " << integer << " " << decimal << endl;
   }
   return 0;
}