import java.util.Scanner;

public class aaah {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        String marius = in.next();
        String doctor = in.next();

        if (marius.length() >= doctor.length()) {
            System.out.println("go");
        } else {
            System.out.println("no");
        }
    }
}
