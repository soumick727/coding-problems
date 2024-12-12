public class prime {
    public static void main(String[] args) {
        int num = 23;
        int flag = 0;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                System.out.println(num + " is not a prime number.");
                flag = 1;
                return;
            }
        }

        if (flag == 0) {
            System.out.println(num + " is a prime number.");
        }
    }
}