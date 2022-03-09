import java.util.Scanner;

public class Main_2588 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a, b;
        
        a = sc.nextInt();
        b = sc.nextInt();

        int b_100, b_10, b_1;

        b_100 = b/100;
        b_10 = (b - (b_100*100) )/10;
        b_1 = b - ((b_100*100) + (b_10*10));

        System.out.println(a*b_1);
        System.out.println(a*b_10);
        System.out.println(a*b_100);
        System.out.println(a*b);

    }
}