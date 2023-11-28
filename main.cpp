// Louis Jahnigen
// CIS 1202 501
// November 28, 2023

#include <iostream>
#include <cmath>

// template to accept floats and doubles
template <typename T>
T half(T x);
// int handler
int half(int x);

int main() {
  double a = 7.0;
  float b = 5.0f;
  int c = 3;

  std::cout << half(a) << '\n';
  std::cout << half(b) << '\n';
  std::cout << half(c) << '\n';

  return 0;
}


template <typename T>
T half(T x) {
  return x / 2;
}


int half(int x) {
  return std::round(static_cast<float>(x) / 2);
}
