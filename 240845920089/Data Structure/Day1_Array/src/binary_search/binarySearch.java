package binary_search;
import java.util.Scanner;
import java.util.stream.Stream;

public class binarySearch {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		Integer arr[]= {1,2,3,4,5,6,7,8,9};
		Stream.of(arr).forEach(System.out::println);
        String ans=null;
        
        do {
        	System.out.println("Enter number to search");
            int snum= sc.nextInt();
            int pos=binarySearch(arr,0,arr.length-1,snum);
            
            if(pos!=-1)
            {
            	System.out.println("Number found"+pos);
            }
            else
            {
            	System.out.println("number not found");
            }
            System.out.println("Do you want to continue(y/n)");
            ans= sc.next();
        }while(ans.equals("y"));
	}

	private static int binarySearch(Integer[] arr, int low, int high, int snum) {
		int l=low;
		int h=high;
		
		if(l<=h)
		{
			int mid=(l+h)/2;
			//System.out.println("left"+left+"right"+right+",mid"+mid);
			
			if(arr[mid]==snum)     //1,2,3,4,5,6,7
			{
				return mid;
			}
			else if(arr[mid]>snum)
			{
				return binarySearch(arr,l,mid-1,snum);
			}
			else
			{
				return binarySearch(arr,mid+1,h,snum);
			}
		}
		
		return -1;
	}

}
