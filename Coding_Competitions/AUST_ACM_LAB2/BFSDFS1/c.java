import java.util.*;
import java.util.Scanner;

public class c {

    public static void main(String args[]) throws Exception {
        try (Scanner sc = new Scanner(System.in)) {

            Vector<String> vec = new Vector<String>();

            String str;

            String curr = "";

            while (sc.hasNextLine()) {
                str = sc.nextLine();

                if (str.equals("--")) {

                    vec.add(curr);
                    curr = "";
                   
                }

                else {
                    curr += str;
                }

            }
            vec.add(curr);

            boolean possible = true;

    
            for (int i = 1; i < vec.size(); i++) {
                String ourObject = vec.get(i);
                String ourObject2 = vec.get(i-1);

                ourObject= ourObject.replaceAll("\\s", "");
                ourObject2= ourObject2.replaceAll("\\s", "");

                System.out.println(ourObject);
                System.out.println(ourObject2);

                if (!ourObject.equals(ourObject2) ) {
                    possible = false;
                }

               
            }

            if (!possible)
                System.out.println("different");
            else
                System.out.println("same");

        }
    }

}
