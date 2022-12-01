import java.util.*;

public class PyramidLevel2 {

    public static void main(String[] args) {
        Scanner myInput = new Scanner(System.in);

        int rows = myInput.nextInt();
        int k = 0;

        for (int i = 1; i <= rows; ++i, k = 0) {
            for (int space = 1; space <= rows - i; ++space) {
                System.out.print(" ");
            }

            while (k != 2 * i - 1) {
                System.out.print("*");
                ++k;
            }

            System.out.println();
        }
    }
}