import java.util.*;

class IO {
    public static void main(String[] args) {

        Scanner answer = new Scanner(new File("IO_in1.txt"));

        int TestCases = answer.nextInt();
        while (TestCases-- > 0) {
            int a = answer.nextInt(), b = answer.nextInt();
            System.out.println(a + b);
        }
    }
}