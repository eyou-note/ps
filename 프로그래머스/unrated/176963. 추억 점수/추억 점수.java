import java.util.*;

class Solution {
    public int[] solution(String[] name, int[] yearning, String[][] photo) {
        int[] answer = new int[photo.length];
        HashMap<String, Integer> nameMap = new HashMap<>();

        for(int i=0;i<name.length;i++){
            nameMap.put(name[i], yearning[i]);
        }

        for(int i=0;i<photo.length;i++){
            int sum = 0;
            for(String p : photo[i]){
                if(nameMap.containsKey(p))
                    sum += nameMap.get(p);
            }
            answer[i] = sum;
        }
        return answer;
    }
}