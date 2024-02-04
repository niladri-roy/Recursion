#include <iostream>

int Power(int n, int p){
  if(p == 1) return n;

  return n * Power(n, p-1);
}

int main(){
  int n, p;

  std :: cout << "Enter a number: ";
  std :: cin >> n;

  std :: cout << "Enter the power: ";
  std :: cin >> p;

  int ans = Power(n, p);
  std :: cout << "The Power of " << n << " raised to " << p << " is: " << ans;
}