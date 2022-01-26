import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;
import java.util.StringTokenizer;

public class Main_11022 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        int T = Integer.parseInt(br.readLine());
        for(int i=0; i<T; i++){
            st = new StringTokenizer(br.readLine());
            String a = new String(st.nextToken()), b = new String(st.nextToken());
            bw.write("Case #"+(i+1)+": "+a+" + "+b+" = ");
            bw.write((Integer.parseInt(a)+Integer.parseInt(b))+"\n");
        }

        bw.flush();
        bw.close();
    }
}