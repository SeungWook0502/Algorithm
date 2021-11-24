import java.util.Scanner;

public class Main_10809 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str = new String();
        str = sc.nextLine();

        for(int i='a';i<='z';i++){
            for(int j =0;j<str.length();j++){
                if(i == str.charAt(j)){
                    System.out.printf(j + " ");
                    break;
                }
                else if(j==str.length()-1){
                    System.out.printf("-1 ");
                } 
            }//lll
        }
        
    }
}
