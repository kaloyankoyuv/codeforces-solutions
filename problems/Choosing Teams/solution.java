import java.util.Scanner;

public class P432A {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
	
		int n = sc.nextInt();
		int k = sc.nextInt();

		int[] a = new int[n];
		for (int i=0; i<n; i++) {
			a[i] = sc.nextInt();
		}
		int r = 0;
		int p = 0;
		for (int i=0; i<n; i++) {
			if (a[i]+k <= 5) {
				p++;
				if (p==3) {
					r++;
					p=0;
				}
			}
			
		}
		System.out.print(r);


	}
}
