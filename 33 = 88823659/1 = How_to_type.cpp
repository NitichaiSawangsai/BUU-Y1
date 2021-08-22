#include <stdlib.h> 
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main () {
  int n = -77;
  string AOM="MON";

  cout.width(6); cout << internal << AOM << n << '\n';
  std::cout.width(8); std::cout << std::left << "NITICHAI" << n << '\n';
  std::cout.width(8); std::cout << std::left << AOM << n << '\n';
  std::cout.width(8); std::cout << std::left << "NITI" << n << '\n';
  std::cout.width(6); std::cout << std::right << AOM << n << '\n';
  return 0;
}
