// Print 1 to N using recursion in cpp
#include <iostream>

void Print(int n)
{
  // Base case -> if n becomes 0, return
  if(n == 0)
    return;

  // Print n and call the function with n-1
  Print(n-1);
  // Print n
  std :: cout << n << "->";
}

int main()
{
  int n;
  std :: cout << "Enter a number: ";
  std :: cin >> n;

  Print(n);
}