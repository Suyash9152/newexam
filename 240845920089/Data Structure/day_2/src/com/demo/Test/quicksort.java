package com.demo.Test;
import java.util.Arrays;

public class quicksort {

	public static void main(String[] args) {
		int arr[]= {5,3,8,6,2};
		System.out.println("Before sorting: ");
		System.out.println(Arrays.toString(arr));
		int n=arr.length-1;
		quickSort(arr,0,n);
		System.out.println("after sortingL: ");
		System.out.println(Arrays.toString(arr));
		
	}

	private static void quickSort(int[] arr,int start,int last) {
		int pivot=start;
		int i=start;
		int j=last;
		if(start<last) {
			while(i<j) {
				while(arr[i]<=arr[pivot]&&i<last) {
					i++;
				}
				while(j>pivot && arr[j]>arr[pivot]) {
					j--;
					
				}
				if(i<j) {
					int temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
			int temp=arr[pivot];
			arr[pivot]=arr[j];
			arr[j]=temp;
			System.out.println("pivot:"+arr[j]+"-----"+j);
			System.out.println(Arrays.toString(arr));
			quickSort(arr,start,j-1);
			quickSort(arr,j+1,last);
		}
		
		
	}

}
