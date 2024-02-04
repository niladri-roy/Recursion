#include <iostream>

void Composite(int n){
  //Base Case -> if n becomes 0, return
  if(n == 0){
    return;
  }

  // Call the function with n-1
  Composite(n-1);

  // Check if n is composite
  int count = 0;
  for(int i=1; i<=n; i++){
    if(n % i == 0){
      count++;
    }
  }

  if(count > 2)
  {
    std :: cout << n << "->";
  }

}

int main(){
  int n;
  std :: cout << "Enter a number: ";
  std :: cin >> n;

  Composite(n);
}