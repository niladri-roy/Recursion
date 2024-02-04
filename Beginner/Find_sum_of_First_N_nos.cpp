#include <iostream>

int Sum(int n){
  if(n == 1) return 1;

  return n + Sum(n-1);
}

int main(){
  int n;
  std :: cout << "Enter a number: ";
  std :: cin >> n;

  int ans = Sum(n);
  std :: cout << "The Sum of First " << n << " Natural Numbers: " << ans;
}