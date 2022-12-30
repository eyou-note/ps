#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    int n,cnt=0; cin>>n;
    string winner,ans, name_input, ans_input;
    vector< pair<string, string> > ans_list(n);

    cin>>winner;
    for(int i=0;i<n;i++){
        cin>>name_input>>ans_input;

        ans_list.push_back({name_input, ans_input});

        if(name_input == winner){
            ans = ans_input;
            break;
        }
    }

    for(int i=0;i<ans_list.size()-1;i++){
        if(ans_list[i].second == ans)
            cnt+=1;
    }

    cout<<cnt;


    return 0;
}     