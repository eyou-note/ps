#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

//오래걸리긴 했는데, 힌트없이 잘 풀었다.
//공을 넣는데 불가능한 케이스는 -1 처리하고
//k에 따라 기본상태 예) n= 5, k=3   3 2 1 에서 n-k 갯수만큼 1씩 증가시킴
int main(){
    fastio;
    freopen("input.txt", "r", stdin);   

    int n,k,mn,diff; 
    cin>>n>>k;

    mn = k*(k+1)/2; // 공이 필요한 최소갯수

    if(n < mn){
        cout<<-1;
        return 0;
    }

    diff = n-mn;
    if(diff == 0){
        cout<<k-1;
    }else{
        vector<int> a;
        for(int i=k;i>0;i--){
            a.push_back(i);
        }

        for(int i=0;i<diff;i++){
            a[i%k]+=1;        
        }

        cout<<a[0] - a[a.size()-1];
    }

    return 0;
}
