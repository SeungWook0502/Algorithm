import java.util.Scanner;
import java.util.StringTokenizer;

public class Main_2675 {    
    public static void main(String[] args) {
        Scanner sc;
        StringTokenizer st;
        String S;
        String P;

        sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int a=0;a<T;a++){
            sc = new Scanner(System.in);
            S = new String(sc.nextLine());  //  입력받은 문자열 S
            st = new StringTokenizer(S," ");
            int R = Integer.parseInt(st.nextToken());   // 반복횟수 R
            P = new String(st.nextToken());   // 반복할 문자열 P

            for(int i=0;i<P.length();i++){
                for(int j=0;j<R;j++){
                    System.out.print(P.charAt(i));
                }
            }
            System.out.println();
        }
        sc.close();
    }   
}
