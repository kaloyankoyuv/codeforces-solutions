#include <stdio.h>

int solve(char n[100]) {
  int ans=0;
  int i=0;
  char pi[] = "3141592653589793238462643383279";
  while (n[i]==pi[i]) {
    ans++;
    i++;
  }
  return ans;
}

int main() {
  int t;
  scanf("%i", &t);
  while (t--) {
    char n[100];
    scanf("%s", &n);

    printf("%i\n", solve(n));
  }
  
  return 0;
}
