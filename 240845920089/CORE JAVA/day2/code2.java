public class code2 {
    public static int add(int a,int b,int ...arr){
        int sum=a+b;
        for(int i:arr){
            sum+=i;
        }
        return sum;
    }
    public static void main(String[] args){
        System.out.println("The sum is:"+ add(2,3));
        System.out.println("The sum with arr:"+ add(3,4,5));
    }
}
