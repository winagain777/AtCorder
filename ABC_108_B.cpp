#include <bits/stdc++.h>
using namespace std;

int main(){
  int x1, x2, x3, x4, y1, y2, y3, y4;
  cin >> x1 >> x2 >> y1 >> y2;
  int A = y2 - y1;
  int B = x2 - x1;
  x3 = x2 - A;
  y3 = y2 + B;
  x4 = x3 - A;
  y4 = y3 - B;
  cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
}
