#include <iostream>

int Fibonacci(int n){
  if( n <= 1 ){
    return n;
  }

  return Fibonacci(n-1) + Fibonacci(n-2);
}

int main(){
  int n;
  std :: cout << "Enter a Number: ";
  std :: cin >> n;

  for(int i = 0; i <n; i++){
    std :: cout << Fibonacci(i) << "->";
  }
  
  std :: cout << std :: endl;

  int sum = Fibonacci(n);
  std :: cout << "Sum of the series is: " << sum << std :: endl;
}