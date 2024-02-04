#include <iostream>

void Prime(int n){

  // Base Case -> if n becomes 0, return
  if(n == 0) return;

  // Call the function with n-1
  Prime(n-1);

  // Check if n is prime
  int i;
  for(i = 2; i < n; i++){
    if(n % i == 0){
      break;
    }
  }
  if(i == n){
    std :: cout << n << "->";
  }
}

int main(){
  int n;
  std :: cout << "Enter a number: ";
  std :: cin >> n;

  Prime(n);
}