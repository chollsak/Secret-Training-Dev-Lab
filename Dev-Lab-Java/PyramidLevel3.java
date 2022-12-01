import java.util.Scanner;

public class PyramidLevel3 {
    public static void main(String[] args) {
        Scanner myInput = new Scanner(System.in);

        int num = myInput.nextInt();

        for (int i = 1; i <= (num - 1); i++) {
            for (int j = 1; j <= num - i; j++) {
                System.out.print(" ");
            }
            for (int k = 1; k <= i * 2 - 1; k++) {
                System.out.print("*");
            }
            System.out.println();
        }
        for (int i = num; i >= 1; i--) {
            for (int j = 1; j <= num - i; j++) {
                System.out.print(" ");
            }
            for (int k = 1; k <= i * 2 - 1; k++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
