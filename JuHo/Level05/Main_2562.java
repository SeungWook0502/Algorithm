import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.IOException;
import java.util.Arrays;


public class Main_2562 {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int[] arr = new int[9];
        int[] arr2 = new int[9];

        for(int i = 0; i<9; i++) {
            arr[i]=Integer.parseInt(br.readLine());
            arr2[i] = arr[i];
        }

        Arrays.sort(arr);

        int index = 0;
        for(int i=0; i<9; i++){
            if(arr[8] == arr2[i]) index = i+1;
        }

        System.out.println(arr[8]+"\n"+index);

    }
}
