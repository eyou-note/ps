#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


int n,m,tree[1000001];
int binary_search(int begin, int end){
    int height=end;

    while(begin<=end){
        int mid = (begin+end)/2;     // 내가 임의로 결정한 정답.
        long long sum=0;
        for(int i=0;i<n;i++){
            if(tree[i]<mid) continue;
            sum+= tree[i]-mid;
        }

        if(sum == m) {
            height = mid;
            break;
        }

        if(sum > m){
            begin = mid+1;
            height = mid;
        }else {
            end = mid-1;
        }
    }
    return height;
}

int main(){
    fastio;
  //  freopen("input.txt", "r", stdin);  

    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>tree[i];
    }
    
    sort(tree, tree+n);

    cout<<binary_search(0, tree[n-1]); // 0 부터 가장 긴 나무 길이를 넘김

    return 0;
    
}
