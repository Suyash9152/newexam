import java.util.Scanner;
public class Code2 {
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int sum=0;
        System.out.println("give me the numbers");
        for (int i=0;i<10;i++){
            int a=sc.nextInt();
            sum+=a;
        }
        System.out.println(sum);
        sc.close();
    }
    
}