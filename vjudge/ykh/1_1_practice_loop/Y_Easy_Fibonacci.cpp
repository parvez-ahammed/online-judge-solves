#include<iostream>
using namespace std;

const int N = 45; 
int fib[N + 1]; 
int main() {
  int n; cin >> n;
  fib[1] = 0;
  fib[2] = 1;
  for (int i = 3; i <= n; i++) {
    fib[i] = fib[i - 1] + fib[i - 2];
  }
  for (int i = 1; i <= n; i++) {
    cout << fib[i] << ' ';
  }
  cout << '\n';
  return 0;
}