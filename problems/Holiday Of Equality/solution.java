import java.util.Scanner;

public class P758A {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();

		int[] a = new int[n];
		for (int i=0; i<n; i++) {
			a[i] = sc.nextInt();
		}

		int lnum = a[0];
		for (int i=1; i<n; i++) {
			if (a[i] > lnum) {
				lnum = a[i];
			}
		}

		int r = 0;
		for (int i=0; i<n; i++) {
			while (a[i] != lnum) {
				r++;
				a[i]++;
			}
		}
		System.out.println(r);


	}
}
