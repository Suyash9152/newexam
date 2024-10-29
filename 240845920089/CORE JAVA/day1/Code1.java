

import java.util.Scanner;

class Code1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Please enter an integer: "); // Prompt for user input
        String b = sc.next(); // Read user input
        int a = 10; // Initialize a
        System.out.println("The input is " + b + " and the value of a is " + a); // Display both inputs
        sc.close(); // Close the scanner
    }
}