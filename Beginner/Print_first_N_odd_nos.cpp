#include <iostream>

void Odd(int n){
  //Base Case -> if n becomes 0, return
  if(n == 0) return;

  // Call the function with n-1
  Odd(n-1);

  // Print n if it is odd
  if(n %2 != 0){
    std :: cout << n << "->";
  }
}

int main(){
  int n;
  std :: cout << "Enter a number: ";
  std :: cin >> n;

  Odd(n);
}