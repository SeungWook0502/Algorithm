import java.util.Scanner;
public class Main_9498 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int score = sc.nextInt();

        System.out.println((score>=90)?"A": (score>=80)?"B": (score>=70)?"C": (score>=60)?"D":"F");
    }
}
