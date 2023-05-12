import java.util.*;

class Solution {
    public int solution(String t, String p) {
        int ans = 0, pSize = p.length();

        List<String> sliced = new ArrayList<>();
        for(int i=0;i<=t.length() - pSize;i++){
            sliced.add( t.substring(i, i+pSize));
        }

        Collections.sort((sliced));

        for(int i=0;i<sliced.size();i++){
            if(sliced.get(i).compareTo(p) <= 0) 
                    ans+=1;
        }

        return ans;
    }
}

