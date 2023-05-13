class Solution {
public int[] solution(String s) {
        int[] answer = new int[2];
        int zeroCnt = 0, loopCnt = 0;

        while(!"1".equals(s)){
            String removedZero = s.replace("0","");

            zeroCnt += s.length() - removedZero.length();
            loopCnt += 1;

            s =  Integer.toBinaryString(removedZero.length());
        }
        
        answer[0] = loopCnt;
        answer[1] = zeroCnt;

        return answer;
    }
}