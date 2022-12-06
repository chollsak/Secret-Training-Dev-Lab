import java.util.*;

public class MinOrMax {
    public static void main(String[] args) {
        Scanner myInput = new Scanner(System.in);

        int a = myInput.nextInt();
        int b = myInput.nextInt();

        if (a > b) {
            System.out.println("A");
        } else if (b > a) {
            System.out.println("B");
        } else if (b == a) {
            System.out.println("AB");
        }
    }
}