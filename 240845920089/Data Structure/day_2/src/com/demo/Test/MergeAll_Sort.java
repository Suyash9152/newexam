package com.demo.Test;

import java.util.Arrays;

public class MergeAll_Sort {

	public static void main(String[] args) {
		int []arr= {12,43,78,24,9,6,3,7};
		System.out.println("Before Sorting : ");
		System.out.println(Arrays.toString(arr));
		mergesort(arr,0,arr.length-1);
		System.out.println("After sorting : ");
		System.out.println(Arrays.toString(arr));

	}

	private static void mergesort(int[] arr, int start, int end) {
		if(start<end)
		{
			int mid=(start+end)/2;
			mergesort(arr,start,mid);
			mergesort(arr,mid+1,end);
			merge(arr,start,mid,end);
			
		}
		
	}

	private static void merge(int[] arr, int start, int mid, int end) {
		int i,j,k;
		
		int n1= mid-start +1;
		int n2= end-mid;
		
		int []leftArray = new int [n1];
		int [] rightArray = new int [n2];
		
		i=0;
		for(int a=start; a<=mid; a++)
		{
			leftArray[i]= arr[a];
			i++;
		}
		j=0;
		for(int a=mid+1; a<=end; a++)
		{
			rightArray[j]= arr[a];
			j++;
		}
		 System.out.println("leftArray :"+Arrays.toString(leftArray));
		 System.out.println("rightArray :"+Arrays.toString(rightArray));
		 
		 i=0;
		 j=0;
		 k=start;
		 while(i<n1 && j<n2)
		 {
			 if(leftArray[i]<rightArray[j])
			 {
				 arr[k]=leftArray[i];
				 i++;
				 k++;
			 }
			 else
			 {
				 arr[k]=rightArray[j];
				 j++;
				 k++;
			 }
		 }
		 while(i<n1)
		 {
			 arr[k]=leftArray[i];
			 i++;
			 k++;
		 }
		 while(j<n2)
		 {
			 arr[k]=rightArray[j];
			 j++;
			 k++;
		 }
		 System.out.println("Array : "+Arrays.toString(arr));
		
		
	}

}
