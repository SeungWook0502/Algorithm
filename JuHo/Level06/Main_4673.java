
public class Main_4673 {
    public static void main(String[] args) {
        boolean[] check = new boolean[100001];

        for(int i = 1; i < 10001; i++){
            int self_num = selfNum(i);

            if(self_num < 10001){
                check[self_num] = true;
            }
        }
        
        for(int i=1;i<10001;i++){
            if(!check[i]){
                System.out.println(i);
            }
        }

    }

    public static int selfNum(int num){
        int sum = num;
        
        while(num!=0){
            sum = sum + (num%10);
            num = num/10;
        }

        return sum;
    }

}
