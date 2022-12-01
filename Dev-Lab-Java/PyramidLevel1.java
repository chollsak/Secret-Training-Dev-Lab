import java.util.*;

public class PyramidLevel1 {
    public static void main(String[] args) {
        Scanner myInput = new Scanner(System.in);

        int a = myInput.nextInt();

        for (int i = 0; i < a; i++) {
            for (int j = 0; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
