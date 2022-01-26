import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Main_2439 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        for(int i=0;i<N;i++){
            for(int x=N-1;x>i;x--) System.out.printf(" ");
            for(int y=0;y<i+1;y++) System.out.printf("*");
            System.out.println();
        }

    }
}