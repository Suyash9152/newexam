public class code3{
    public static int add(byte a,byte b){
        System.out.println("in add ---byte");
        return a+b;
    }
    // public static int add(int a , int b){
    //     System.out.println("in add --->int");
    //     return a+b;
    // }
    public static long add(long a, long b){
        System.out.println("in add ---long");
        return a+b;
    }
    public static long add(Integer x,Integer y) {
		System.out.println("in add ---Integer");
		return x+y;
	}
    public static long add(Long x,Long y){
        System.out.println("in add ---Long");
        return x+y;
    }
    public static void main(String [] args)
    {
        System.out.println("get me the sum:"+ add(1,2));
    }
}