package com.demo.Test;

import java.util.Arrays;

public class Insertion_Sort {

	public static void main(String[] args) {
		int [] arr= {8,3,5,12,24,4,6};
		System.out.println("before sorting ");
		System.out.println(Arrays.toString(arr));
		insertion_sort(arr);
		System.out.println("After sorting");
		System.out.println(Arrays.toString(arr));

	}

	private static void insertion_sort(int[] arr) {
		int n=arr.length;
		for(int i=1; i<n; i++)
		{
			int j=i-1;
			int key= arr[i];
			
			while(j>=0 && arr[j]>key)
			{
				arr[j+1]=arr[j];
				j--;
			}
			arr[j+1]=key;
			System.out.println("Iteration " +i);
			System.out.println(Arrays.toString(arr));
		}
		
	}

}
