import java.util.Scanner;

public class P472A {

  static boolean isComposite(int n) {
    if (n<=1) {
      return false;
    }
    if (n<=3) {
      return false;
    }

    if (n%2 == 0 || n%3 ==0) {
      return true;
    }

    for (int i=5; i*i<=n; i+=6 ) {
      if (n%i == 0 || n%(i+2) == 0) {
        return true;
      }
    }
    return false;

  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();
    int a, b;

    for (int i=0; i<n; i++) {
      a = i;
      b = n-a;
      boolean ba = isComposite(a);
      boolean bb = isComposite(b);

      if (ba && bb) {
        System.out.print(a + " " + b);
        break;
      }
    }

  }
}
