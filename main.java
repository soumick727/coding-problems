import java.util.Arrays;

public class main{
    public static void main(String[] args) {
        String s="";
        String[] arr={"mile","name","een"};
        for(int i=0; i<arr.length; i++) {
            char c = arr[i].charAt(0);
            s+=c;
        }

        char[] chars = s.toCharArray();
        Arrays.sort(chars);
        String sortedString = new String(chars);
        System.out.println(sortedString);


}
}
