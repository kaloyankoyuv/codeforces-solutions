import java.util.Arrays;
import java.util.Scanner;
import java.lang.Math;

public class P1399A {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();

		while(t!=0) {

			int n = sc.nextInt();
			int[] a = new int[n];

			for (int i=0; i<n; i++) {
				a[i] = sc.nextInt();
			}

			Arrays.sort(a);
			String result = "YES";
			for (int i=1; i<n; i++) {
				if (Math.abs(a[i] - a[i-1]) > 1) {
					result = "NO";
					break;
				}
			}
			System.out.println(result);
			t--;
		}
	}
}
