import java.util.Scanner;

public class TheNewYearMeetingFriends {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a[] = new int[3];
        for (int i=0; i<3; ++i) {
            a[i] = sc.nextInt();
        }

        int lnum = a[0];
        for (int i=0; i<3; ++i) {
            if (a[i] > lnum) {
                lnum = a[i];
            }
        }

        int snum = a[0];
        for (int i=0; i<3; ++i) {
            if (a[i] < snum) {
                snum = a[i];
            }
        }

        int mnum = a[0];
        for (int i=0; i<3; ++i) {
            if (a[i] > snum && a[i] < lnum) {
                mnum = a[i];
            }
        }

        System.out.println((lnum-mnum)+(mnum-snum));
    }
}
