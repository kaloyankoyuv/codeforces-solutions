import java.util.Scanner;

public class Presents {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        sc.nextLine();

        int a[] = new int[n+1];

        for (int i=1; i<=n; i++) {
            int b = sc.nextInt();
            a[b] = i;
        }

        for (int i=1; i<=n; i++) {
          System.out.print(a[i] + " ");
        }
    }
}
