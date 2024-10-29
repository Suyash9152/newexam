package pack_assignment1;

public class assign1 {

	public static void main(String[] args) {
		int arr[]=new int[args.length];
		
		for(int i=0;i<args.length;i++) {
			int argument=Integer.parseInt(args[i]);
			int cnt=0;
			for(int j=1;j<=argument;j++) {
				if(argument%j==0) {
					cnt++;
				}
			}
			if(cnt==2) {
				System.out.println(argument + "is a prime number");
				System.out.println("The table of "+argument+" is as follows: ");
				for(int k=1;k<=10;k++) {
					System.out.println(argument+"*"+k+"="+argument*k);
				}
			}
			else {
				System.out.println("the division is:"+argument/10);
			}
		
		}
		
		

	}

}