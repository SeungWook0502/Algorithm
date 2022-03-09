import java.util.Scanner;
public class Main_14681 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int Quadrant_x = sc.nextInt();
        int Quadrant_y = sc.nextInt();
        sc.close();

        if((Quadrant_x<=1000 && Quadrant_x>0) && (Quadrant_y<=1000 && Quadrant_y>0)) System.out.println("1");
        else if((Quadrant_x>=-1000 && Quadrant_x<0) && (Quadrant_y<=1000 && Quadrant_y>0)) System.out.println("2");
        else if((Quadrant_x>=-1000 && Quadrant_x<0) && (Quadrant_y>=-1000 && Quadrant_y<0)) System.out.println("3");
        else if((Quadrant_x<=1000 && Quadrant_x>0) && (Quadrant_y>=-1000 && Quadrant_y<0)) System.out.println("4");

    }
}
