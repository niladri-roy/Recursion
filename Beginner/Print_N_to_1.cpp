
#include <iostream>

void Print(int n){
  if(n==0)
    return;

  std :: cout << n << "->";
  Print(n-1);
}

int main(){
  int n;
  std :: cout << "Enter a number: ";
  std :: cin >> n;

  Print(n);
}