import java.io.*;
public class Main_15552 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int cnt = Integer.parseInt(br.readLine());
        for(int i=0; i<cnt; i++){
            int a = Integer.parseInt(br.readLine()), b = Integer.parseInt(br.readLine());
            bw.write(String.valueOf(a+b));   //BufferedWriter는 String변수만 출력함.
            bw.write("\n");
        }
        bw.flush();
        bw.close();
    }
}
// 왜 런타임 오류지????? 시간 초과로 틀린건가??
// 샤발;;ㅋㅋㅋ