import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Main_2577 {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int A = Integer.parseInt(br.readLine()), B = Integer.parseInt(br.readLine()), C = Integer.parseInt(br.readLine());
        String X = String.valueOf(A*B*C);

        int[] cnt = new int[10];
        for(int i=0;i<10;i++){
            for(int j=0;j<X.length();j++){
                if(X.charAt(j)==(char)i)cnt[i]++;
            }
            System.out.println(cnt[i]);
        }
    }

}