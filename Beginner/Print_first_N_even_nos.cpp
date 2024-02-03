#include <iostream>

void Even(int n){
  if(n == 0) return;

  Even(n-1);
  
  if(n%2 == 0){
    std :: cout << n << "->";
  }
}

int main(){
  int n;
  std :: cout << "Enter a number: ";
  std :: cin >> n;

  Even(n);
}