#include <string>
#include <vector>
#include <map>

using namespace std;


typedef struct _Point{
    int x;
    int y;
} Point;

string solution(vector<int> nums, string hand) {
    string ans = "";
    string order="*0#789456123";
    map<char, Point> pos_info;

    for(int i=0, pos=0;i<4;i++){
        for(int j=0;j<3;j++){
            pos_info[order[pos++]] =  {i,j};
        }
    }

    Point r_cur_pos = pos_info['#'];
    Point l_cur_pos = pos_info['*'];

    for(auto n : nums){
        Point move_pos = pos_info[ n+'0'];

        if(n==7||n==4||n==1){
            ans.push_back('L');
            l_cur_pos = move_pos;
        }else if (n==9||n==6||n==3){
            ans.push_back('R');
            r_cur_pos = move_pos;
        }else{
             int l_diff = abs(l_cur_pos.x - move_pos.x) + abs(l_cur_pos.y - move_pos.y) ;
            int r_diff = abs(r_cur_pos.x - move_pos.x) + abs(r_cur_pos.y - move_pos.y) ;

            if(l_diff < r_diff){
                ans.push_back('L');
                l_cur_pos = move_pos;
            }else if (l_diff > r_diff){
                ans.push_back('R');
                r_cur_pos = move_pos;
            }else{
                //같으면
                if(hand[0] == 'l'){
                    ans.push_back('L'); 
                    l_cur_pos = move_pos;
                }else{
                    ans.push_back('R');
                    r_cur_pos = move_pos;
                }
            }
        }
       
    }
    
    return ans;
}