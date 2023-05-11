class Solution {
    public int[] solution(int[] lottos, int[] win_nums) {
        int[] answer = new int[2];
        int zeroCnt=0, cnt=0;

        for (int num:lottos) {
            if(num == 0) zeroCnt+=1;

            for (int winNum:win_nums) {
                if(winNum == num){
                    cnt+=1;
                    break;
                }
            }
        }

        answer[0] = (zeroCnt+cnt) < 2 ? 6 : 7-(zeroCnt+cnt);
        answer[1] = (cnt) < 2 ? 6 : 7-cnt;

        return answer;
    }
}