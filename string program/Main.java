class PrimeThread extends Thread {
    public void run(){
        int count = 0;
        int num=2;
        while(count<5){
            if(isPrime(num)){
                System.out.println("Prime : " + num);
                count++;
            }
            num++;
        }
    }
    private boolean isPrime(int num){
        if(num<=1) return false;
        for(int i=2;i*i<=num;i++){
            if(num%i==0) return false;
        }
        return true;
    }
}

class EvenThread extends Thread {
    public void run(){
        for(int i=2;i<10;i+=2){
            System.out.println("Even : " + i);
        }
    }
}

class OddThread extends Thread {
    public void run(){
        for(int i=1;i<10;i+=2){
            System.out.println("Odd : " + i);
        }
    }
}

public class Main {
    public static void main(String[] args) {
        PrimeThread primeThread = new PrimeThread();
        EvenThread evenThread = new EvenThread();
        OddThread oddThread = new OddThread();
        
        primeThread.start();
        evenThread.start();
        oddThread.start();
}
}