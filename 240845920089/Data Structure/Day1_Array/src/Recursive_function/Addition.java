package Recursive_function;

public class Addition {
	public static void main(String [] args) {
		int ans=addition(6);
		System.out.println("the addition is: "+ans);
		int ans_rec=recurssive_addition(6);
		System.out.println("the addition from recussion is: "+ans_rec);
		
	}

	private static int recurssive_addition(int i) {
		if(i==1) {
			return 1;
		}
		return i+recurssive_addition(i-1);
	}

	private static int addition(int num) {
		int sum=0;
		for(int i=1;i<=num;i++) {
			sum+=i;
		}
		return sum;
	}

}
