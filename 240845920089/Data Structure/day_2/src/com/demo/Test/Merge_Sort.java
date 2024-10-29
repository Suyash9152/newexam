package com.demo.Test;
import java.util.Arrays;

public class Merge_Sort {

	public static void main(String[] args) {
		int a1[]= {2,5,28,30,46};
		int a2[]= {1,6,10,16,19};
		int a3[]=new int[a1.length+a2.length];
		merge_arr(a1,a2,a3);
		System.out.println(Arrays.toString(a3));
		

	}

	private static void merge_arr(int[] a1, int[] a2, int[] a3) {
		int i=0,j=0,k=0;
		while(i<a1.length && j<a2.length) {
			if(a1[i]<a2[j]) {
			a3[k]=a1[i];
			i++;
			k++;
		    }else {
			   a3[k]=a2[j];
			j++;
			k++;
		}
		
		
	}
	
	while(i<a1.length) {
		a3[k]=a1[i];
		i++;
		k++;
	}
	while(j<a2.length) {
		a3[k]=a2[j];
		j++;
		k++;
	}

}
}
