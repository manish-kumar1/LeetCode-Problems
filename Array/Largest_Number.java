import java.util.Arrays;
import java.util.Scanner;
class Largest_Number{

    public static String LargeNumber(int[] arr){
        int n = arr.length;
        String[] s = new String[n];
        for(int i = 0; i < n; ++i){
            s[i] = String.valueOf(arr[i]);
        }
        Arrays.sort(s, (a, b) -> (b + a).compareTo(a + b));

        StringBuilder sb = new StringBuilder();
        for(String str : s){
            sb.append(str);
        }
        String result = sb.toString();
        return result.startsWith("0") ? "0" : result;
    }
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int [] arr = new int[n];
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }
        String ans = LargeNumber(arr);
        System.out.println(ans);

        sc.close();
    }
}