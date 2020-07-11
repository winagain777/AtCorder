#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> X(N), Y(N), Z(N*(N-1));
  for(int i = 0; i < N; i++){
    cin >> X.at(i) >> Y.at(i);
  }
  
  double route = 0;
  int i = 1;
  do{
    route = pow(X.at(i) - X.at(i - 1), 2) + 
  }
}