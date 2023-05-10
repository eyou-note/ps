import java.util.stream.IntStream;

class Solution {
  public int solution(int number, int limit, int power) {
        return IntStream.rangeClosed(1, number)
                        .map(i -> {
                            int divisorCnt = getDivisorCnt(i);
                            return (divisorCnt > limit) ? power : divisorCnt;
                        }).sum();
    }

    private int getDivisorCnt(int num){
        int cnt = 0;
        for(int i=1;i*i<=num;i++){
            if(i*i == num) cnt+=1;
            else if(num%i==0) cnt+=2;
        }
        return cnt;
    }
}