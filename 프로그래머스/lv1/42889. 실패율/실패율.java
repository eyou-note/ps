import java.util.*;

class Solution {
  
    static class Stage implements Comparable<Stage> {
        private int no;
        private double failureRate;

        public Stage(){}

        public Stage(int no, double failureRate) {
            this.no = no;
            this.failureRate = failureRate;
        }

        public int getNo() {
            return no;
        }

        public void setNo(int no) {
            this.no = no;
        }

        public double getFailureRate() {
            return failureRate;
        }

        public void setFailureRate(double failureRate) {
            this.failureRate = failureRate;
        }

        @Override
        public int compareTo(Stage o) {
            if(this.getFailureRate() < o.getFailureRate())
                    return -1;
            if(this.getFailureRate() > o.getFailureRate())
                return 1;
            return 0;
        }
    }

    public int[] solution(int N, int[] stages) {
        int[] stageCnt = new int[N + 2];
        int userCnt = stages.length;
        List<Stage> stageInfo = new ArrayList<>();

        for(int stage : stages){
            stageCnt[stage] += 1;
        }

        for(int i=1;i<=N;i++){
            Stage stage = new Stage(i, (double) stageCnt[i]/userCnt);
            stageInfo.add(stage);
            userCnt -= stageCnt[i];
        }

        Collections.sort(stageInfo, Collections.reverseOrder());

        int[] answer = new int[N];
        for (int i = 0; i < N; i++) {
            answer[i] = stageInfo.get(i).getNo();
        }

        return answer;
    }
}