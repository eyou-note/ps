import java.util.*;


class Solution {

    
        public String solution(String[] cards1, String[] cards2, String[] goal) {
        String answer = "Yes";
        Queue<String> queueForCard1 = new LinkedList<>();
        Queue<String> queueForCard2 = new LinkedList<>();

        for(String card : cards1){
            queueForCard1.add(card);
        }
        for(String card : cards2){
            queueForCard2.add(card);
        }

        for(String word : goal){
            if(word.equals(queueForCard1.peek())){
                queueForCard1.remove();
            }else if (word.equals(queueForCard2.peek())){
                queueForCard2.remove();
            }else{
                answer = "No";
                break;
            }
        }

        return answer;
    }
    
    
}