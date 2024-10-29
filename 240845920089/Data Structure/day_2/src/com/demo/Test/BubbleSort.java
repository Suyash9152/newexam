package com.demo.Test;

import java.util.Arrays;

public class BubbleSort {
	public static void main(String [] args) {
		int array[]= {5,8,1,4,6,9};
		System.out.println("given array: ");
		System.out.println(Arrays.toString(array));
		bubblesort(array);
		System.out.println("sorted array through bubble sort:");
		System.out.println(Arrays.toString(array));
		System.out.println("\n");
		int array1[]= {5,8,1,4,6,9};
		improvedbubblesort(array1);
		System.out.println("sorted array through improvedbubble sort:");
		System.out.println(Arrays.toString(array1));
		
		
		
		
		}

	private static void improvedbubblesort(int[] array) {
	int swapcnt=0;
	for(int i=0;i<array.length;i++) {
		for(int j=1;j<array.length-i;j++) {
			if(array[j-1]>array[j]) {
				int temp=array[j-1];
				array[j-1]=array[j];
				array[j]=temp;
				swapcnt++;
			}
		}
		System.out.println("swapcnt:"+swapcnt+"  current array:"+Arrays.toString(array));
		if(swapcnt==0) {
			break;
		}
		swapcnt=0;
	}
		
	}

	private static void bubblesort(int[] array) {
		int swapcnt=0;
		for(int i=0;i<array.length;i++) {
			for(int j=1;j<array.length-i;j++) {
				if(array[j-1]>array[j]) {
					int temp=array[j-1];
					array[j-1]=array[j];
					array[j]=temp;
					swapcnt++;
				}
			}
			System.out.println("swapcnt:"+swapcnt+"   current array:"+Arrays.toString(array));
			swapcnt=0;
		}
		
		
	}
}
