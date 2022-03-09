import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;
import java.util.StringTokenizer;

public class Main_15552 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        int T = Integer.parseInt(br.readLine());
        for(int i=0; i<T; i++){
            st = new StringTokenizer(br.readLine());
            bw.write((Integer.parseInt(st.nextToken())+Integer.parseInt(st.nextToken()))+"\n");
        }

        bw.flush();
        bw.close();
    }
}

/* 
readLine(); 이라는 메서드는 리턴값이 String으로 고정됨.IOExceoption 예외처리가 필요함.
   
BufferedRead, BufferedWriter, StringTokenizer 사용법 사이트
https://m.blog.naver.com/ka28/221850826909



*/