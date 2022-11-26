#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    int n,in; cin>>n;
    deque<pair<int, int>> dq;

    for(int i=0;i<n;i++){
        cin>>in;
        dq.push_back({i+1,in});
    }



    while(true){
        pair<int, int> p = dq.front();
        dq.pop_front();
        cout<<p.first<<' ';
        
        if(dq.empty()) break;
        if(p.second > 0){
            for(int i=0;i<p.second-1;i++){
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }else{
			for (int i = p.second; i < 0;i++) {
                dq.push_front(dq.back());
				dq.pop_back();
            }
        }

    }

    return 0;
}