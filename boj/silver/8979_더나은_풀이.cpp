#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


//국가별로 메달정보를 따로 저장해서 직접 비교함
//이렇게 되면 정렬도 필요없고 내 앞에 몇명인지 카운트해서 +1 해주면 됨
int main(){
    fastio;
    freopen("input.txt", "r", stdin);   

    int N, K, idx, ranking=0;
    int gold[1001]={0,}
        , silver[1001]={0,}
        , bronze[1001]={0,};

    cin>>N>>K;
    for(int i=0;i<N;i++){
        cin>>idx;
        cin>>gold[idx]>>silver[idx]>>bronze[idx];
    }

    for(int i=1;i<=N;i++){

        if(gold[i] > gold[K]){
            ranking+=1;
        }else if(gold[i] == gold[K] && silver[i] > silver[K]){
            ranking+=1;
        }else if(gold[i] == gold[K] && silver[i] == silver[K] && bronze[i] > bronze[K]){
            ranking+=1;
        }
    }

    cout<<ranking+1;


        
    return 0;
}
