import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);

	int t = sc.nextInt();

	while (t!=0) {
	    int n = sc.nextInt();

	    if ((n/2)%2!=0) {
		System.out.println("NO");
		t--;
		continue;
	    } else if ((n/2)%2==0) {

		System.out.println("YES");
		
		int a[] = new int[n];

		int x = 2;
		for (int i=0; i<n/2; i++) {
		    a[i] = x;
		    x+=2;
		}

		int y = 1;
		for (int i=n/2; i<n; i++) {
		    if (i==(n-1)) {
			a[i] = y+(n/2);
		    } else {
			a[i] = y;
			y+=2;
		    }
		}

		for (int i=0; i<n; i++) {
		    if (i == n-1) {
			System.out.print(a[i]);
			System.out.println();
		    } else {
			System.out.print(a[i] + " ");
		    }
		}
       
		t--;
		continue;
	    }
	}
	
    }
}
