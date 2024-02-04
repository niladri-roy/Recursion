#include <iostream>

int Factorial(int n){
  if(n == 1) return 1;

  return n * Factorial(n-1);
}

int main(){
  int n;
  std :: cout << "Enter a number: ";
  std :: cin >> n;

  int ans = Factorial(n);
  std :: cout << "The Factorial: " << ans;
}