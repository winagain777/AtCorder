#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll A, B, C;
    cin >> A >> B >> C;
    if(A % 2 == 0 && B % 2 == 0 && C % 2 == 0) cout << 0 << endl;
    else{
        ll a = min(A*B, B*C);
        ll b = min(a, C*A);
        cout << b << endl;
    }
}
