//import java.util.*;
public class Code5 {
    public static boolean isPrime(int num){
        for(int i=2;i<num;i++){
            if (num%i==0){
                return false;
            }

        }
        return true;
    }
    public static void main(String [] args){
        int sum=0;
        for(int i=0;i<args.length;i++){
        boolean check=isPrime(Integer.parseInt(args[i]));
        if(check){
            sum+=Integer.parseInt(args[i]);

        }
    }
    System.out.println(sum);
    }
}

