import java.util.*;

public class Solution {

    public static void countApplesAndOranges(int s, int t, int a, int b, int[] apples, int[] oranges) {

        int appleCount = 0;
        int orangeCount = 0;

        
        for (int i = 0; i < apples.length; i++) {
            int position = a + apples[i];

            if (position >= s && position <= t) {
                appleCount++;
            }
        }

        
        for (int i = 0; i < oranges.length; i++) {
            int position = b + oranges[i];

            if (position >= s && position <= t) {
                orangeCount++;
            }
        }

        System.out.println(appleCount);
        System.out.println(orangeCount);
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        // house range
        int s = sc.nextInt();
        int t = sc.nextInt();

        // tree positions
        int a = sc.nextInt();
        int b = sc.nextInt();

        // number of fruits
        int m = sc.nextInt();
        int n = sc.nextInt();

        int[] apples = new int[m];
        int[] oranges = new int[n];

        // apple distances
        for (int i = 0; i < m; i++) {
            apples[i] = sc.nextInt();
        }

        // orange distances
        for (int i = 0; i < n; i++) {
            oranges[i] = sc.nextInt();
        }

        countApplesAndOranges(s, t, a, b, apples, oranges);
    }
}