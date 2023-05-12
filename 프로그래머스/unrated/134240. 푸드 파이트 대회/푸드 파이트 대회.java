class Solution {
    public String solution(int[] foods) {
        int[] cnt = new int[10];

        for(int i=1;i<foods.length;i++){
            cnt[i] = foods[i]/2;
        }


        StringBuilder sb = new StringBuilder();
        for(int i=1;i<10;i++){
            if(cnt[i] == 0) continue;

            for(int j=0;j<cnt[i];j++)
                sb.append(i);
        }

        return sb.toString() + "0" + sb.reverse().toString();
    }
}