
// Java program to find large factorials using BigInteger
import java.math.BigInteger;
import java.util.Scanner;

public class mock {

    public static void main(String args[]) throws Exception {

        try (Scanner sc = new Scanner(System.in)) {
            BigInteger A, B;
            String str;
            str = sc.nextLine();
            str.split(" ");
            String[] stringarray = str.split(" +");
            A = new BigInteger(stringarray[0]);
            B = new BigInteger(stringarray[2]);
            BigInteger C = A.add(B);
            System.out.println(C);

        }
    }
}
