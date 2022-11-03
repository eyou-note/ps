#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


int binary_search(vector<int>& a, int begin, int end, int x){
    int result = -1;
    while(begin<=end){
        int mid = (begin+end)/2;
        //같아도 리턴하면 안됌 더 앞쪽 또는 뒤쪽을 봐야함
        if(x>a[mid]){
            begin = mid+1;
        }else{
            if(x==a[mid]) result = mid;
            end = mid-1;
        }
    }
    return result;
}

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    int n,m,in; cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(), a.end());

    for(int i=0;i<m;i++){
        cin>>in;

        cout<<binary_search(a, 0, n-1, in)<<'\n';
    }

    return 0;
}
