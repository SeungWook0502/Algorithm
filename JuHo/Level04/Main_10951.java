import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;
import java.util.StringTokenizer;

public class Main_10951 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        while(true){
            st = new StringTokenizer(br.readLine());
            String a = new String(st.nextToken()), b = new String(st.nextToken());
            if(a.equals("0")&&b.equals("0")) break;
            else  bw.write((Integer.parseInt(a)+Integer.parseInt(b))+"\n");
        }

        bw.flush();
        bw.close();
    }
}

// 끝나는 조건을 안알려줬는데????
// 어디서 끝내야하나?
// 내가 이상한가?
// 뭐지ㅣ...