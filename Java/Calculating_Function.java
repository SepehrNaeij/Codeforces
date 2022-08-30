import java.util.Scanner;

public class Calculating_Function {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        long input = scanner.nextLong();
        long result;
        if (input % 2 == 0) {
            result = input / 2;
        } else {
            result = ((input + 1) / 2) * (-1);
        }
        System.out.println(result);
    }
}
