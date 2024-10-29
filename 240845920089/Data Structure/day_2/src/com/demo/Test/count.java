package com.demo.Test;

import java.util.Arrays;

public class count {

	public static void main(String[] args) {
		int arr[] = {5,8,2,4,9,6,7};
		System.out.println("Before sorting: ");
		System.out.println(Arrays.toString(arr));
		int[] sorteddata= counting_sort(arr);
		System.out.println("After sorting : ");
		System.out.println(Arrays.toString(sorteddata));
		
	}

	private static int[] counting_sort(int[] arr) {
		int max=findmax(arr);
		
		int [] counter = new int[max+1];
		
		for(int i=0; i<arr.length; i++)
		{
			counter[arr[i]]++;
		}
		
		System.out.println("counter array : ");
		System.out.println(Arrays.toString(counter));
		
		for(int i=1;i<counter.length;i++)
		{
			counter[i]=counter[i]+counter[i-1];
		}
		System.out.println("cumulative sum counting array");
		System.out.println(Arrays.toString(counter));
		
		int []output= new int [arr.length];
		
		for(int i=0; i<arr.length; i++)
		{
			output[counter[arr[i]]-1]=arr[i];
			counter[arr[i]]--;
		}
		return output;
	}

	private static int findmax(int[] arr) {
		int max=arr[0];
		for(int i=1; i<arr.length;i++)
		{
			if(max<arr[i])
			{
				max=arr[i];
			}
		}
		return max;
	}

}
