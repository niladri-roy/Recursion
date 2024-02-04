#include <iostream>

int powerOf2(int n){
  if( n == 1 ){
    return 2;
  }

  return 2 * powerOf2(n-1);
}

int main(){
  int n;
  std :: cout << "Enter a Number: ";
  std :: cin >> n;

  int ans = powerOf2(n);
  std :: cout << "2 raised to the power " << n << " is: " << ans << std :: endl;
}