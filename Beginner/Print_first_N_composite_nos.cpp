#include <iostream>

void Composite(int n){

  if(n == 0){
    return;
  }


  Composite(n-1);

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