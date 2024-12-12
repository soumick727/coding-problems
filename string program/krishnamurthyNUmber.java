// Wap in java to identify one user given positive integer is Krishnamurthy no or not
// If Krishnamurthy then print yes
// Otherwise throw user defined exception with a message


import java.util.Scanner;

class NotKrishnamurthyException extends Exception {
    public NotKrishnamurthyException(String message) {
        super(message);
    }
}

public class krishnamurthyNUmber {
    public static int factorial(int num){
        int fact = 1;
        for(int i = 1; i <= num; i++){
            fact *= i;
        }
        return fact;
    }
    
    public static boolean isKrishnamurthyNumber(int num){
        int sum = 0;
        int temp = num;
        while(temp > 0){
            int digit = temp % 10;
            sum += factorial(digit);
            temp /= 10;
        }
        
        return sum == num;
    }
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();
        scanner.close();
        
        try {
            if(isKrishnamurthyNumber(number))
                System.out.println(number + " is a Krishnamurthy number.");
            else
                throw new NotKrishnamurthyException("Number is not a Krishnamurthy number.");
        } catch (NotKrishnamurthyException e) {
            System.out.println(e.getMessage());
        }
    }
}

