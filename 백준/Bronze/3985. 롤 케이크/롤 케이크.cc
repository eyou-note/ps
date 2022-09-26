#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  
    
    int L,N,begin,end;      cin>>L>>N;
    pair<int, int> expect = make_pair(0,-1), 
                            actual = make_pair(0,-1);
    vector<int> cake(L+1,0);

    for(int i=1;i<=N;i++){
        cin>>begin>>end;
        int cnt=0;

        if( end-begin > expect.second ){
            expect = make_pair(i, (end-begin==0)?1:end-begin);
        }

        for(int j=begin;j<=end;j++){
            if(cake[j] == 0){
                cake[j] = i;
                cnt += 1;
            }
        }

        if( cnt > actual.second ){
            actual = make_pair(i, cnt);
        }

    }

    cout<<expect.first<<'\n'<<actual.first;

    return 0;
}