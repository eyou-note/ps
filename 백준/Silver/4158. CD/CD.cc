#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

bool binary_search(vector<int>& a, int begin, int end, int x){

    while(begin<=end){
        int mid = (begin+end)/2;

        if(a[mid] == x) return true;
        
        else if(a[mid] > x) end = mid-1; 

        else   begin = mid+1;

    }

    return false;
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    int n,m,in; 

    while(1){
        cin>>n>>m;
        if(n==0&&m==0) break;
        int cnt=0;
        vector<int> s(n);
        for(int i=0;i<n;i++) { //O(N)
            cin>>s[i];
        }   
        
        for(int i=0;i<m;i++) {
            cin>>in;
            if(binary_search(s, 0, n-1, in)){
                    cnt+=1;
            }
        }

        cout<<cnt<<'\n';
    }
    return 0;

}

