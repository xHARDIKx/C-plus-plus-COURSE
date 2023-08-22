#include <iostream>
using namespace std;

int main() {
  int S, E, W;
  
  cin >> S;
  
  cin >> E;
  
  cin >> W;

  
  for (int i = S; i <= E; i += W) {
    double c = (i - 32) * 5.0 / 9.0;
    cout << i  << c << endl;
  }
  return 0;
}
