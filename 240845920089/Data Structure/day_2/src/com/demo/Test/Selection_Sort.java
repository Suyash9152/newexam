package com.demo.Test;
import java.util.Arrays;
public class Selection_Sort {

	public static void main(String[] args) {
		int a[]= {8,6,1,3,9,2,10,4};
		System.out.println("Before Sorting:");
		System.out.println(Arrays.toString(a));
		selection_sort(a);
		System.out.println("after Sorting:");
		System.out.println(Arrays.toString(a));
		

	}

	private static void selection_sort(int[] arr) {
		for(int i=0;i<arr.length-1;i++) {
			int min=i;
			for(int j=i+1;j<arr.length;j++) {
				if(arr[min]>arr[j]) {
					min=j;
				}
			}
			int temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
		
		
	}

	
		
	}

