#include <iostream>

int main() {

  int t;
  std::cin >> t;

  
  while (t--) {
    
    char position[2];
    std::cin >> position;

    for (char i = '1'; i <= '8'; i++) {
      if (i != position[1]) {
        std::cout << position[0] << i << " ";
      }
    }

    for (char i = 'a'; i <= 'h'; i++) {
      if (i != position[0]) {
        std::cout << i << position[1] << " ";
      }
    }
  }

  return 0;
}
