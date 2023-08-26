import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);

	int t = sc.nextInt();
	sc.nextLine();

	for(int i=0; i<t; i++) {

	    String s = sc.nextLine();

	    for (int j=0; j<s.length(); j++) {
		char ch = s.charAt(j);

		if (j==0 || j%2!=0) {
		    System.out.print(ch);
		}
	    }
	    System.out.println();
	}
    }
}
