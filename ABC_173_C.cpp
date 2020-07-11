#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int H, W, K;
  cin >> H >> W >> K;
  vector<vector<char>> vec(H, vector<char> (W));
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      char mark;
      cin >> mark;
      vec.at(i).at(j) = mark;
      }
    }

  int count = 0, ans = 0;
  for(int i = 0; i < (1 << H); i++){
    for(int j = 0; j < (1 << W); j++){
      count = 0;
      for(int k = 0; k < H; k++){
          for(int l = 0; l < W; l++){
            if(((i >> k) & 1) == 0 && ((j >> l) & 1) == 0 && (vec.at(k).at(l) == '#')){
              count++;
            }
          }
        }
      if(K == count){
        ans++;
      }
    }
  }
  cout << ans << endl;
}