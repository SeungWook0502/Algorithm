import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;
import java.util.StringTokenizer;

public class Main_10871 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());
        int X = Integer.parseInt(st.nextToken());
        int[] A = new int[N];

        st = new StringTokenizer(br.readLine());
        for(int i=0; i<N; i++){   // 수열 A 입력받기
            A[i] = Integer.parseInt(st.nextToken());
            if(A[i]<X) bw.write(A[i]+" ");
        }


        bw.flush();
        bw.close();
    }
}

// 배열을 사용하면 안되나??
// 배열을 사용하면 StringTokenizer 말고 
// String[] strs = br.readLine().split(" "); 사용해서
// 공백으로 구분하고 입력받기.
