import java.util.Scanner;

public class Hulk {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int input = scanner.nextInt();
        String Result = "";
        if (input >= 1) {
            Result += "I hate that ";
        }
        for (int i = 2; i <= input; i++) {
            if (i != input) {
                if (i % 2 == 1)
                    Result += "I hate that ";
                else
                    Result += "I love that ";
            }else{
                if (i % 2 == 1)
                    Result += "I hate it ";
                else
                    Result += "I love it ";
            }
        }
        if ( input!=1 ) {
            System.out.println(Result);
        }else{
            System.out.println("I hate it");
        }
    }
}
