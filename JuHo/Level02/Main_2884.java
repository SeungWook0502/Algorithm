import java.util.Scanner;
public class Main_2884 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int H = sc.nextInt();
        int M = sc.nextInt();
        sc.close();

        if(M<45){
            if(H == 0){
                System.out.println("23 "+(15+M));
            }
            else{
                System.out.println((H-1)+" "+(15+M));
            }
        }
        else{
            System.out.println(H+" "+(M-45));
        }
    }
}
