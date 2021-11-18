import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.io.IOException;

public class Main_1546 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        
        int N = Integer.parseInt(br.readLine());  // 과목의 개수

        double[] score = new double[N];
        double max_score = 0;
        st = new StringTokenizer(br.readLine()," ");
        for(int i = 0; i < N; i++){   // 과목의 점수 입력
            score[i] = Integer.parseInt(st.nextToken());
            if(score[i]>max_score) max_score = (int)score[i];   // 최대점수
        }

                
        double sum = 0;
        for(int i = 0; i < N; i++){    // 과목 점수 바꿔주기
            score[i] = score[i]/max_score*100.0;   // 왜 이부분이 안되는거지?
            sum = sum + score[i];
        }
        

        System.out.println((double)sum/N);

    }

}
