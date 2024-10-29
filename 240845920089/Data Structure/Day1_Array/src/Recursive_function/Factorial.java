package Recursive_function;

public class Factorial {
	public static void main(String [] args) {
		int fact=factorial(8);
		System.out.println("the factorial is: "+ fact);
		int rec_fact=recurssive_fact(8);
		System.out.println("the factorial by recurssion is: "+ rec_fact);
		

	}

	private static int recurssive_fact(int i) {
		if(i==1) {
			return 1;
		}
		return i*recurssive_fact(i-1);
	}

	private static int factorial(int num) {
		int fact=1;
		for(int i=2;i<=num;i++) {
			fact*=i;
		}
		return fact;
	}
	

	
}
