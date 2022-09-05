#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    freopen("input.txt", "r", stdin); 

    int loop;
    cin>>loop;

    while(loop--){
        int score=0, acc=0;
        string result;

        cin>>result;

        for(int i=0;i<result.size();i++){
            
            score += acc;

            if(result[i]== 'O'){
                acc++;
            }else{
                acc=0;
            }
        }
        score += acc;

        cout<<score<<'\n';
    }

    return 0;
}   