import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main_11720 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        
        
        st = new StringTokenizer(br.readLine());
        String str = new String();
        str = st.nextToken();
        
        int[] num = new int[N];
        for(int i=0;i<N;i++){
            num[i] = str.charAt(i) - '0';
        }
        int sum=0;
        for(int i=0;i<N;i++){
            sum = sum + num[i];
        }

        System.out.println(sum);
        
        

    }
}
