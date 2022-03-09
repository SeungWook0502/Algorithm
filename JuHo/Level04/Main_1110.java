import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Main_1110 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int N = Integer.parseInt(br.readLine());
        int num = N, cnt = 0, sum = 0;

        while(true){
            if(num<10) sum = 0 + num;
            else {
                sum = (num/10) + (num%10);
                num = num%10;
            }
            cnt++;
            num = (num*10) + (sum%10);
            if(num == N) break;
        }

        System.out.println(cnt);

    }
}
