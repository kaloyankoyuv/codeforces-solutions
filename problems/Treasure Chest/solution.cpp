#include <iostream>

int main() {

  int t;
  std::cin >> t;
  
  int x, y, k;
  
  while (t--) {

    std::cin >> x >> y >> k;

    if (x < y) {

      if (y - x <= k) {
        std::cout << y << std::endl;
      } else if (y - x > k) {
        std::cout << y + y - (x + k) << std::endl;
      }
    } else if (x > y) {
      std::cout << x << std::endl;
    }
  }

  return 0;
}
