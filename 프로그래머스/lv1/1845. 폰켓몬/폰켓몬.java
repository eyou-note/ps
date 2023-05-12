import java.util.*;
import java.util.stream.Collectors;

class Solution {

    
   public int solution(int[] nums) {
        int choice = nums.length/2;

        Set<Integer> st = new HashSet<>(Arrays.stream(nums)
                                            .boxed()
                                            .collect(Collectors.toList()));
        
        return Math.min(choice, st.size());

    }
}