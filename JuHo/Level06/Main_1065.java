import java.util.Scanner;


public class Main_1065 {
    static int r = 0;
    static int count = 0;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int num = sc.nextInt();
        for(int i=1;i<=num;i++){
            hanFunc(i);
        }
        System.out.println(count);
        sc.close();
    }

    public static void hanFunc(int num){
        int a = num/100, b = (num-a*100)/10, c = num-a*100-b*10;
        int a_b = a-b, b_c = b-c;
        if(a != 0){  // 세 자리
            if(a_b == b_c) count++;  
            else return;       
        }
        else{  // 한 자리, 두 자리
            count++;         
        }
    }
}
