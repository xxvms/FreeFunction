#include "Utility.h"
#include <iostream>

int DoubleIt(int x);
void DoubleItRef(int &x);

int main() {

  int x = 25;
  std::cout << DoubleIt(x) << '\n';

  std::cout << x << '\n';

  DoubleItRef(x);

  std::cout << x << '\n';

  std::cout << DoubleIt(x) << '\n';

  std::cout << "Prime testing " << '\n';

  IsPrime(12);
  IsPrime(0);
  IsPrime(17);

  if (Is2MorePrime(x)){
    std::cout << x << "+2 is prime" << '\n';
  }else {
    std::cout << x << "+2 is not prime" << '\n';
  }

  return 0;
}

int DoubleIt(int x) { return x = x * 2; }

void DoubleItRef(int &x) { x = x * 3; }