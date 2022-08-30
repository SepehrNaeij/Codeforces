import java.util.Scanner;

public class Fafa_and_his_Company {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int result = 0;

        if ( a==2 ){
            result=1;
        }else{
            for(int i=2;i<=a;i++)
            {
                if ( a%i==0 ){
                    result++;
                }
            }
        }
        System.out.println(result);
    }
}
