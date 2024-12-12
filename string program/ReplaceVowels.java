public class ReplaceVowels{
    public static void main(String[] args){
        String str = "soumick roy";
        String replacedStr = str.replaceAll("[aeiouAEIOU]", "_");
        System.out.println(replacedStr);
    }
}