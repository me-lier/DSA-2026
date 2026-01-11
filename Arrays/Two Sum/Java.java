import java.util.*;

public class Java{

    public static List<Integer> Two_sum(int[] arr, int target){
        int n = arr.length;
        Map<Integer, Integer> mp = new HashMap<>();
        for(int i = 0; i < n; i++){
            int sum = target - arr[i];
            if(mp.containsKey(sum)) return new ArrayList<Integer>(Arrays.asList(i, mp.get(sum)));
            mp.put(arr[i], i);
        }

        return new ArrayList<Integer>(Arrays.asList(-1, -1));
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }
        int target = sc.nextInt();
        sc.close();
        List<Integer> res = Two_sum(arr, target);

        for(int i : res){
            System.out.print(i + ",  ");
        }
    }
}