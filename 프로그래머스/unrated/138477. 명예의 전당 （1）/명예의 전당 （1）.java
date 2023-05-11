import java.util.*;

class Solution {
    public int[] solution(int k, int[] score) {
        int[] answer = new int[score.length];
        int pos = 0;
        Vector<Integer> v = new Vector<>();

        for(int s : score){
            v.add(s);
            Collections.sort(v, (Integer a, Integer b)-> b - a);

            if(v.size() <= k ) answer[pos++] = v.lastElement();
            else answer[pos++] = v.get(k-1);

        }
        return answer;
    }
}