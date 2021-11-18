import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.io.IOException;

public class Main_4344 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        int C = Integer.parseInt(br.readLine());
        int[] sum = new int[C];
        double[] mean = new double[C];  // 총 계산
        double[] rate = new double[C];    // 평균을 넘는 비율에 사용
        for(int n=0;n<C;n++){
            st = new StringTokenizer(br.readLine()," ");   // 한 줄 입력
            int N = Integer.parseInt(st.nextToken());

            int[] score = new int[N];   // 한 줄에 인원
            for(int i=0;i<N;i++){    // 한 줄 점수 합계
                score[i] = Integer.parseInt(st.nextToken());
                sum[n] = sum[n] + score[i];
           }

           mean[n] = (double)sum[n] / (double)N;   // 한 줄 점수 평균
           int cnt =0;   // 평균을 넘는 학생 인원 count
           for(int i=0;i<N;i++){
               if(mean[n]<score[i])  cnt++;
           }
           rate[n] = ((double)cnt / (double)N)*100;
        }


        for(int i=0;i<C;i++) {
            String re_str = String.format("%.3f", rate[i]);
            System.out.println(re_str+"%");
            
        }
    }

}
