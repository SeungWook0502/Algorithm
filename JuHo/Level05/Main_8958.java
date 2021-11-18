import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Main_8958 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        int[] sum = new int[N];  // 최종 출력 값
        for(int i=0;i<N;i++){
            String str = new String(br.readLine());
            
            int score = 0;  // O가 연속으로 나왔을 때 점수 증가
            for(int j=0;j<str.length();j++){
                if(Character.compare(str.charAt(j),'O')==0){
                    score++;
                    sum[i] = sum[i] + score;
                }
                else score = 0;
            }
        }
        for(int i=0;i<N;i++){
            System.out.println(sum[i]);
        }
    }

}
