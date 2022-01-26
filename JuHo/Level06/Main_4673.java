import java.util.ArrayList;

public class Main_4673 {
    public static void main(String[] args) {
        
        ArrayList<Integer> numarr = new ArrayList<Integer>();

        int n=1;
        while(true){
            if(func(n)<=10000){
                numarr.add(n, func(n));
                n++;
            }
            else break;

        }
        
        int j = 1;
        for(int i=1;i<n;i++){
            if(numarr.get(i) != j) {
                System.out.println(j);
                j++;
            }
            j++;
        }

    }

    public static int func(int num){
        int a=num/1000, b=(num/1000)%100, c=(num/100)%10, d=num/10;
        int res = 0;

        res = num + a + b + c + d;
        
        return res;
    }
}
